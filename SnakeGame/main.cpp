﻿#include <SFML/Graphics.hpp>

using namespace sf;

int main(void) {

	RenderWindow window(VideoMode(640, 480), "Snake Game");
	// 컴퓨터 사양이 달라도 똑같은 속도로 처리함
	window.setFramerateLimit(60); // 1초에 (최대)60번의 작업이 이루어지도록 frame조절

	RectangleShape snake;
	snake.setPosition(200, 300);
	snake.setSize(Vector2f(30, 30));
	snake.setFillColor(Color::Green);

	while (window.isOpen()) {

		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록 설정
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Up))
			snake.move(0, -1);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			snake.move(0, 1);

		window.clear();

		window.draw(snake);
		window.display();
	}

	return 0;

}