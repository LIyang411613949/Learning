# -*- coding: utf-8-*-
 
import random
import pygame
from pygame.locals import *
from sys import exit

# 屏幕大小
screen_width=700
screen_height=400
# 字体数目
rain_num = 30
# 字体大小
font_num = 25
 
# 初始化硬件环境
pygame.init()
 
# 访问显示设备
# 创建一个窗口
# 使用 pygame.display.set_mode() 创建的新显示界面会自动替换掉旧的
# RESIZABLE 创建一个可调整尺寸的窗口
screen=pygame.display.set_mode([screen_width, screen_height], RESIZABLE)

# 设置标题
pygame.display.set_caption("代码雨")

# 从系统字体库创建一个 Font 对象
font = pygame.font.SysFont("123.ttf", font_num)
 
# 创建一个图像对象
# SRCALPHA每个像素包含一个 alpha 通道
bg_suface = pygame.Surface((screen_width, screen_height), flags=pygame.SRCALPHA)
 
# 使用纯色填充 Surface 对象
bg_suface.fill(pygame.Color(0, 0, 0, 16))
 
# 使用纯色填充窗口
screen.fill((0, 0, 0))
 
# 按屏幕的宽带计算可以在画板上放几列坐标并生成一个列表
drops = [0 for i in range(rain_num)]
 
while True:
    # 从队列中获取事件
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
        elif event.type == pygame.KEYDOWN:
            chang = pygame.key.get_pressed()
            if (chang[32]):
                exit()
 
    # 将暂停一段给定的毫秒数
    pygame.time.delay(30)
 
    # 将图片放到窗口的原点坐标上
    screen.blit(bg_suface, (0, 0))
 
    for i in range(rain_num):
        # 随机数字字体
        text1 = font.render(str(random.randint(0,9)), True, (0, 255, 0))
        text2 = font.render(str(random.choice('abcdefghijklmnopqrstuvwxyz')), True, (0, 255, 0))
 
        # 将字体按照当前下雨的位置刷新到窗口上
        screen.blit(text2,(i * screen_width/rain_num, drops[i] * (font_num - 10)))
 
        # 更新下雨的坐标，采用随机值
        drops[i] += 1
        if drops[i] * 10 > screen_height or random.random() > 0.95:
            drops[i] = 0
 
    # 更新屏幕
    pygame.display.flip()

