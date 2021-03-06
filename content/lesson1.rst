Основы языка Си
###############

:date: 2018-08-01 09:00
:summary: Разбор "Hello, World!". Ошибки и этапы компиляции. Переменные в языке Си. Эффект Overflow. Циклы for и while. Операторы присваивания и сравнения. Деление нацело и взятие остатка.
:status: published
:published: yes

.. default-role:: code

Канал общения с другими участниками курса
=========================================

Если вы пользуетесь соцсетью "Вконтакте", `вступайте в сообщество "Курса молодого бойца"`__ для обсуждений и взаимопомощи.

.. __: https://vk.com/mipt_c_intro

Установка среды разработки Code::Blocks
=======================================

Обучение предполагает не только просмотр видео, но и самостоятельный запуск,
а также модификацию предлагаемых программ. Для компиляции исходных текстов на
Си рекомендуется установить среду `Code::Blocks с компилятором MinGW`__.

.. __: http://www.codeblocks.org/downloads/26

К каждому уроку предполагается домашнее задание, однако по техническим причинам его публикация задерживается до 15 августа. Ссылка на него будет находится на `главной странице курса`__ справа от содержания урока.

.. __: http://cs.mipt.ru/c_intro

Разбор "Hello, World!" на Си
============================

.. youtube:: S6HzukfU0Lw

Приветствие целевой аудитории курса.
Разбор hello_world.c построчно.

``hello_world.c``
-----------------

.. code-include:: code/lesson1/hello_world.c
    :lexer: cpp
	
Ошибки и предупреждения при компиляции
======================================

.. youtube:: OR_QrTHaNbQ

Что такое компиляция.
Любите ошибки компиляции!
Примеры сообщений об ошибках.
Предупреждения при компиляции.
Опция -Wall очень полезна!

``warnings_errors.c``
---------------------

.. code-include:: code/lesson1/warnings_errors.c
    :lexer: cpp

Этапы компиляции на Си: предобработка, трансляция, компоновка
=============================================================

.. youtube:: UNJ1xTsH9ko

Этапы компиляции: предобработка, трансляция, компоновка.
Компилятор GCC.
Компиляция в консоли.

Переменные в языке Си
=====================

.. youtube:: pO9dwhV9Pi4

Переменная - это...
Что определяет тип.
Типизированные значения, не являющиеся переменными.
Концепция присваивания в Си.
Какими типами пользоваться.

Переполнение и ошибки при работе с целыми типами в Си
=====================================================

.. youtube:: sKrIIWS2kaY

Целочисленное переполнение.
Декларация переменных целых типов.
Демонстрация переполнения.
Неявное приведение типов: проблема с unsigned и signed.
Явное приведение типов.

``declarations.c``
------------------

.. code-include:: code/lesson1/declarations.c
    :lexer: cpp

``overflows.c``
---------------

.. code-include:: code/lesson1/overflows.c
    :lexer: cpp

``typecasting.c``
-----------------

.. code-include:: code/lesson1/typecasting.c
    :lexer: cpp


Циклы for и while: сходство и различие
======================================

.. youtube:: 7K61QRBZNjM

Итерация, тело цикла и заголовок.
Синтаксис цикла while. Значение переменной после цикла.
Заголовок цикла for и сравнение с циклом while.
Опасность зацикливания.

Генерация арифметических и геометрических прогрессий
====================================================

.. youtube:: sCanJ1ubevA

Цикл, генерирующий прогрессиию.
Обёртка для диалога с пользователем.
Особенности программ, сдаваемых в систему Ejudge.
Отладка программы для отрицательного шага.

``generation.c``
----------------

.. code-include:: code/lesson1/generation.c
    :lexer: cpp
	
Операции присваивания и сравнения чисел в Си
============================================

.. youtube:: 48as_RUOIXM

Операция присваивания — арифметическая операция.
Виды операций присваивания.
Операция сравнения — арифметическая операция.
Результат сравнения — целое число 0 или 1.

``assignment.c``
----------------

.. code-include:: code/lesson1/assignment.c
    :lexer: cpp

``comparisons.c``
-----------------

.. code-include:: code/lesson1/comparisons.c
    :lexer: cpp

Деление нацело и взятие остатка
===============================

.. youtube:: 8K5Rd0xRAy0

Деление нацело и взятие остатка.
Разложение числа на цифры.
Осторожно: отрицательные остатки при делении отрицательного на положительное!
Как сделать дробное деление для целых чисел.

``division.c``
--------------

.. code-include:: code/lesson1/division.c
    :lexer: cpp

.. Файлы видео курса:
	1_01-hello_world.mp4
	1_02-errors_warnings.mp4
	1_03-compilation_steps.mp4
	1_04-variables.mp4
	1_05-overflow.mp4
	1_06-for_while_loops.mp4
	1_07-progressions.mp4
	1_08-comparisons.mp4
	1_09-divisions.mp4
	
Самостоятельная работа
======================

Дорогой учащийся! Вы — молодец, если вы просмотрели видеоролики.

Но урок ещё не закончился! Вы получите практические навыки при выполнении заданий учебного соревнования в системе автоматической проверки Ejudge или, говоря студенческим жаргоном, *контеста* (англ. contest).

*К СОЖАЛЕНИЮ, ПО ТЕХНИЧЕСКИМ ПРИЧИНАМ ПУБЛИКАЦИЯ КОНТЕСТОВ ЗАДЕРЖИВАЕТСЯ.*

