#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>

using namespace sf;

class Entity {
public:
	// ���� ��κ��� Ŭ������ �Ű������� �� ���� �ּҰ����� �޴´�
	// �޸� �뷮 �� call by value �̽� ������ �����
	Entity(int life, int speed, RectangleShape* sprite)
		:life_(life), sprite_(sprite), speed_(speed)
	{
	}

	~Entity() {}

	// sprite_�� ��ġ�� x, y��ŭ ����
	void move(float x, float y)
	{
		sprite_->move(x, y);
	}

	// ������ ����ϴ� ���� Player, Ememy���� ���
	virtual void eat(Entity* e) { }

	// getter
	int get_life() { return life_; }
	RectangleShape get_sprite() { return *sprite_; }
	int get_speed() { return speed_; }

	// setter
	void set_life(int val) { life_ = val; }
	void set_speed(int val) { speed_ = val; }
	void set_sprite(RectangleShape* val) { sprite_ = val; }

private:
	int life_;
	int speed_;
	RectangleShape* sprite_;
};

class Player : public Entity {
 public:
	 Player(int life, int speed, RectangleShape* sprite, int score)
		 : Entity(life, speed, sprite), score_(score) {

	}
	 // ������ life�� 1���, ������ ȸ��
	 void eat(Entity* e) override {
		 e->set_life(e->get_life() - 1);
		 score_ += 50;
	 }
private:
	int score_;
};

int main(void)
{
	srand((unsigned int)time(NULL));
	RenderWindow window(VideoMode(1000, 800), "Sangsok");
	window.setFramerateLimit(60);

	RectangleShape sp1;
	sp1.setPosition(400, 300);
	sp1.setSize(Vector2f(50, 50));
	sp1.setFillColor(Color::Color(206, 230, 243));

	RectangleShape se1;
	se1.setPosition(rand() % 800, rand() % 600);
	se1.setSize(Vector2f(40, 40));
	se1.setFillColor(Color::Color(212, 226, 212));

	RectangleShape se2;
	se2.setPosition(rand() % 800, rand() % 600);
	se2.setSize(Vector2f(60, 60));
	se2.setFillColor(Color::Color(255, 209, 209));

	RectangleShape se3;
	se3.setPosition(rand() % 800, rand() % 600);
	se3.setSize(Vector2f(20, 20));
	se3.setFillColor(Color::Color(219, 196, 240));

	Player* player = new Player(3, 5, &sp1, 0);

	Entity* enemy1 = new Entity(1, 3, &se1);
	Entity* enemy2 = new Entity(1, 2, &se2);
	Entity* enemy3 = new Entity(1, 4, &se3);

	while (window.isOpen()) {
		Event e;

		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)

				window.close();
		}

		// Input
		// ����Ű �̵�
		if (Keyboard::isKeyPressed(Keyboard::Up)) {
			player->move(0, -player->get_speed());
		}
		if (Keyboard::isKeyPressed(Keyboard::Down)) {
			player->move(0, player->get_speed());
		}
		if (Keyboard::isKeyPressed(Keyboard::Left)) {
			player->move(-player->get_speed(), 0);
		}
		if (Keyboard::isKeyPressed(Keyboard::Right)) {
			player->move(player->get_speed(), 0);
		}


		// Update
		if (player->get_sprite().getGlobalBounds().intersects(enemy1->get_sprite().getGlobalBounds())) {
			player->eat(enemy1);
		}
		if (player->get_sprite().getGlobalBounds().intersects(enemy2->get_sprite().getGlobalBounds())) {
			player->eat(enemy2);
		}
		if (player->get_sprite().getGlobalBounds().intersects(enemy3->get_sprite().getGlobalBounds())) {
			player->eat(enemy3);
		}

		// Render
		window.clear();

		window.draw(player->get_sprite());

		if (enemy1->get_life() > 0) {
			window.draw(enemy1->get_sprite());
		}
		if (enemy2->get_life() > 0) {
			window.draw(enemy2->get_sprite());
		}
		if (enemy3->get_life() > 0) {
			window.draw(enemy3->get_sprite());
		}

		window.display();
	}

	delete player;
	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}