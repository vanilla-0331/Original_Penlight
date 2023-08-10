#include <Adafruit_NeoPixel.h>

#define SW1_PIN 4      //Arduino:4 , Digispark:0
#define SW2_PIN 2      //Arduino:2 , Digispark:1
#define DIN_PIN 10     //Arduino:10 , Digispark:2
#define LED_COUNT 20

Adafruit_NeoPixel pixels(LED_COUNT, DIN_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, DIN_PIN, NEO_GRB + NEO_KHZ800);

/* 起動時に1回だけ呼ばれる関数 */
void setup() 
{
  pixels.setBrightness(30);
  pinMode(SW1_PIN, INPUT_PULLUP);
  pinMode(SW2_PIN, INPUT_PULLUP);
}

/* 消灯の要素 */
uint32_t black2 = pixels.Color(0, 0, 0);
uint32_t black_color[] = {black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2, black2};
int black_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 赤色の要素 1 */
uint32_t red2 = pixels.Color(128, 0, 0);
uint32_t red_color[] = {red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2, red2};
int red_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ダークオレンジ色の要素 2 */
uint32_t dark_orange2 = pixels.Color(128, 20, 0);
uint32_t dark_orange_color[] = {dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2, dark_orange2};
int dark_orange_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ライトオレンジ色の要素 3 */
uint32_t light_orange2 = pixels.Color(128, 40, 0);
uint32_t light_orange_color[] = {light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2, light_orange2};
int light_orange_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* オレンジ色の要素 4 */
uint32_t orange2 = pixels.Color(128, 82, 0);
uint32_t orange_color[] = {orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2, orange2};
int orange_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 黄色の要素 5 */
uint32_t yellow2 = pixels.Color(128, 128, 0);
uint32_t yellow_color[] = {yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2, yellow2};
int yellow_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ライト黄色の要素 6 */
uint32_t light_yellow2 = pixels.Color(80, 128, 0);
uint32_t light_yellow_color[] = {light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2, light_yellow2};
int light_yellow_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 黄緑色の要素 7 */
uint32_t yellow_green2 = pixels.Color(64, 128, 0);
uint32_t yellow_green_color[] = {yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2, yellow_green2};
int yellow_green_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ライト緑色の要素 8 */
uint32_t light_green2 = pixels.Color(30, 128, 0);
uint32_t light_green_color[] = {light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2, light_green2};
int light_green_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 緑色の要素 9 */
uint32_t green2 = pixels.Color(0, 128, 0);
uint32_t green_color[] = {green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2, green2};
int green_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* シアングリーンの要素 10 */
uint32_t cyan_green2 = pixels.Color(0, 128, 20);
uint32_t cyan_green_color[] = {cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2, cyan_green2};
int cyan_green_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 青緑色の要素 11 */
uint32_t blue_green2 = pixels.Color(0, 128, 64);
uint32_t blue_green_color[] = {blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2, blue_green2};
int blue_green_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* シアン色の要素 12 */
uint32_t cyan2 = pixels.Color(0, 128, 128);
uint32_t cyan_color[] = {cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2, cyan2};
int cyan_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 水色の要素 13 */
uint32_t sky_blue2 = pixels.Color(0, 64, 128);
uint32_t sky_blue_color[] = {sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2, sky_blue2};
int sky_blue_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 青色の要素 14 */
uint32_t blue2 = pixels.Color(0, 0, 128);
uint32_t blue_color[] = {blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2, blue2};
int blue_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ライト青色の要素 15 */
uint32_t light_blue2 = pixels.Color(20, 0, 128);
uint32_t light_blue_color[] = {light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2, light_blue2};
int light_blue_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* バイオレット色の要素 16 */
uint32_t violet2 = pixels.Color(65, 0, 128);
uint32_t violet_color[] = {violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2, violet2};
int violet_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 紫色の要素 17 */
uint32_t purple2 = pixels.Color(128, 0, 128);
uint32_t purple_color[] = {purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2, purple2};
int purple_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ライト紫色の要素 18 */
uint32_t light_purple2 = pixels.Color(128, 0, 82);
uint32_t light_purple_color[] = {light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2, light_purple2};
int light_purple_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ピンク色の要素 19 */
uint32_t pink2 = pixels.Color(128, 0, 40);
uint32_t pink_color[] = {pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2, pink2};
int pink_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* ライトピンク色の要素 20*/
uint32_t light_pink2 = pixels.Color(128, 0, 20);
uint32_t light_pink_color[] = {light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2, light_pink2};
int light_pink_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 白色の要素 21 */
uint32_t white2 = pixels.Color(128, 128, 128);
uint32_t white_color[] = {white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2, white2};
int white_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};



/* 特殊仕様 */
/* 多色グラデーション */
uint32_t RGB_color[] = {red2, red2, red2, red2, red2, red2, red2, green2, green2, green2, green2, green2, green2, blue2, blue2, blue2, blue2, blue2, blue2, blue2};
int RGB_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};


/* 虹色の要素 */
uint32_t rainbow_color[] = {red2, dark_orange2, light_orange2, orange2, yellow2, light_yellow2, yellow_green2, light_green2, green2, cyan_green2, blue_green2, cyan2, sky_blue2, blue2, light_blue2, violet2, purple2, light_purple2, pink2, light_pink2};
int rainbow_index[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

/* 操作用フラグの変数 */
int i = 1;             //LEDの色分け用
int s = 100;           //LEDのスピード制御用
int brightness = 30;   //LEDの光量制御用
bool setLED = true;    //LEDの発光制御用
bool mode1 = false;    //sw1の制御用
bool mode2 = false;    //sw2の制御用
bool mode3 = false;    //sw1&sw2の同時押し制御用


/* setup関数の処理後、ずっと繰り返し処理される関数 */
void loop() 
{
  if(mode1)
  {
    /* 光量調整 */
    brightness = (brightness + 20) % 100;
    pixels.setBrightness(brightness);
    pixels.show();
    mode1 = false;
  }
  if(setLED)
  {
    /* 色変更 */
    sw1();
  }
  /* スイッチの動作 */
  flag_switch();
  delay(50);  
}

/* スイッチを読み取るフラグ */
void flag_switch()
{
  /* sw1の制御 */
  if(digitalRead(SW1_PIN) == LOW)
  {
    int t = 0;   // 短押しか長押しかを判定する用のカウンター
    while(digitalRead(SW1_PIN) == LOW)
    {
      t++;
      delay(5);   
    }
    /* 0.25秒長押ししたら，光量調整モード */
    if(t > 50){
      mode1 = true;
    }
    else
    {
      /* sw1を押して離すと，色を１つ進める */
      i++;
      /* 再度，点灯しなおす */
      setLED = true;
    }
  }

  /* sw2の制御 */
  if(digitalRead(SW2_PIN) == LOW)
  {
    int t = 0;    // 短押しか長押しかを判定する用のカウンター
    while(digitalRead(SW2_PIN) == LOW)
    {
      t++;
      delay(5);
    }        
    /* 0.25秒長押ししたら，スピード調整モード */
    if(t > 50)
    {
      if(s > 30)
      {
        s = (s - 30);
      }
      else
      {
        if(s == 10)
        {
          /* スピード調整は4段階変更できる */
          s = 100;
        }
      }
    }
    else
    {
      if(!mode2)
      {
        /* sw2を押して離すと，色を１つ戻す */
        i--;
        /* 再度，点灯しなおす */
        setLED = true;
      }
    }
  }
  /* もし虹色でsw1を単押ししたら赤色に進む */
  if(i > 26)
  {
    i = 1;
  }
  /* もし赤色でsw2を単押ししたら虹色に戻る */
  if(i < 1)
  {
    i = 26;
  }
}

/* SW1の挙動 */
void sw1()
{ 
  switch(i)
  {
    case 1: red();
            break;
    case 2: dark_orange();
            break;
    case 3: yellow();
            break;
    case 4: yellow_green();
            break;
    case 5: green();
            break;
    case 6: cyan_green();
            break;
    case 7: blue();
            break;
    case 8: violet();
            break;
    case 9: light_pink();
            break;
    case 10: white();
            break;
    case 11: rgb();
            break;            
    case 12: rainbow();
            break;
    case 13: red_night_rider();
            break;
    case 14: dark_orange_night_rider();
            break;
    case 15: yellow_night_rider();
            break;
    case 16: yellow_green_night_rider();
            break;
    case 17: green_night_rider();
            break;
    case 18: cyan_green_night_rider();
            break;
    case 19: blue_night_rider();
            break;
    case 20: violet_night_rider();
            break;
    case 21: light_pink_night_rider();
            break;
    case 22: white_night_rider();
            break;
    case 23: rgb_night_rider();
            break;
    case 24: rainbow_night_rider();
            break;
    case 25: rgb_roop();
            break;            
    case 26: rainbow_roop();
            break;
  }
}

/* SW2の挙動 */
void sw2(bool long_judge)
{ 
  /* 短押し時は1つ色を戻す */
  if(!long_judge)
  {
    int i = i - 1;
    sw1();
  }
  
  /* 長押し時は点灯 */
  else if(long_judge)
  {
    pixels.begin();
    pixels.show();
    delay(100);  
  }
}

void sw_judge()
{
  int count = 0;
  while(true)
  {
    /* 表示中でもボタン操作を受けつける */
    flag_switch();
    //delay(10);
    count++;
    if (count > 100)
    {
      break;
    }
  }
}

void black()
{
  for(int i = 0; i < LED_COUNT; i++) 
  {    
    pixels.clear();    
    for(int j = 0; j < LED_COUNT; j++) 
    {
      black_index[j] = i - j;
      if(black_index[j] >= LED_COUNT) black_index[j] -= LED_COUNT;
      
      pixels.setPixelColor(black_index[LED_COUNT - j - 1], black_color[LED_COUNT - j - 1]);
    }
    pixels.begin();
    pixels.show(); 
    delay(s);
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void red()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    { 
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      }   
      pixels.setPixelColor(red_index[LED_COUNT - j - 1], red_color[LED_COUNT - j - 1]);
      pixels.begin(); 
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void dark_orange()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {   
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      }  
      pixels.setPixelColor(dark_orange_index[LED_COUNT - j - 1], dark_orange_color[LED_COUNT - j - 1]);   
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void yellow()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(yellow_index[LED_COUNT - j - 1], yellow_color[LED_COUNT - j - 1]);
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void yellow_green()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(yellow_green_index[LED_COUNT - j - 1], yellow_green_color[LED_COUNT - j - 1]);
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void green()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(green_index[LED_COUNT - j - 1], green_color[LED_COUNT - j - 1]);
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void cyan_green()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(cyan_green_index[LED_COUNT - j - 1], cyan_green_color[LED_COUNT - j - 1]);
      pixels.begin();
      pixels.show();
      delay(s);
    } 
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void blue()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(blue_index[LED_COUNT - j - 1], blue_color[LED_COUNT - j - 1]);
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void violet()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(violet_index[LED_COUNT - j - 1], violet_color[LED_COUNT - j - 1]);   
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void light_pink()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(light_pink_index[LED_COUNT - j - 1], light_pink_color[LED_COUNT - j - 1]);   
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void white()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(white_index[LED_COUNT - j - 1], white_color[LED_COUNT - j - 1]);   
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void rgb()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(RGB_index[LED_COUNT - j - 1], RGB_color[LED_COUNT - j - 1]);   
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void rainbow()
{
  if(setLED)
  {
    pixels.clear();    
    for(int j = 0 ; j < LED_COUNT; j++) 
    {    
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
      {
        sw_judge();
      } 
      pixels.setPixelColor(rainbow_index[LED_COUNT - j - 1], rainbow_color[LED_COUNT - j - 1]);   
      pixels.begin();
      pixels.show();
      delay(s);
    }
  }
  /* 点灯の制御処理を変更 */
  setLED = false;
}

void red_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(red_index[i], red_color[i]);
    pixels.setPixelColor(red_index[i + 1], red_color[i + 1]);
    pixels.setPixelColor(red_index[i + 2], red_color[i + 2]);
    pixels.setPixelColor(red_index[i + 3], red_color[i + 3]);
    pixels.setPixelColor(red_index[i + 4], red_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(red_index[i], red_color[i]);
    pixels.setPixelColor(red_index[i + 1], red_color[i + 1]);
    pixels.setPixelColor(red_index[i + 2], red_color[i + 2]);
    pixels.setPixelColor(red_index[i + 3], red_color[i + 3]);
    pixels.setPixelColor(red_index[i + 4], red_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void dark_orange_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(dark_orange_index[i], dark_orange_color[i]);
    pixels.setPixelColor(dark_orange_index[i + 1], dark_orange_color[i + 1]);
    pixels.setPixelColor(dark_orange_index[i + 2], dark_orange_color[i + 2]);
    pixels.setPixelColor(dark_orange_index[i + 3], dark_orange_color[i + 3]);
    pixels.setPixelColor(dark_orange_index[i + 4], dark_orange_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(dark_orange_index[i], dark_orange_color[i]);
    pixels.setPixelColor(dark_orange_index[i + 1], dark_orange_color[i + 1]);
    pixels.setPixelColor(dark_orange_index[i + 2], dark_orange_color[i + 2]);
    pixels.setPixelColor(dark_orange_index[i + 3], dark_orange_color[i + 3]);
    pixels.setPixelColor(dark_orange_index[i + 4], dark_orange_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void yellow_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(yellow_index[i], yellow_color[i]);
    pixels.setPixelColor(yellow_index[i + 1], yellow_color[i + 1]);
    pixels.setPixelColor(yellow_index[i + 2], yellow_color[i + 2]);
    pixels.setPixelColor(yellow_index[i + 3], yellow_color[i + 3]);
    pixels.setPixelColor(yellow_index[i + 4], yellow_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(yellow_index[i], yellow_color[i]);
    pixels.setPixelColor(yellow_index[i + 1], yellow_color[i + 1]);
    pixels.setPixelColor(yellow_index[i + 2], yellow_color[i + 2]);
    pixels.setPixelColor(yellow_index[i + 3], yellow_color[i + 3]);
    pixels.setPixelColor(yellow_index[i + 4], yellow_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void yellow_green_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(yellow_green_index[i], yellow_green_color[i]);
    pixels.setPixelColor(yellow_green_index[i + 1], yellow_green_color[i + 1]);
    pixels.setPixelColor(yellow_green_index[i + 2], yellow_green_color[i + 2]);
    pixels.setPixelColor(yellow_green_index[i + 3], yellow_green_color[i + 3]);
    pixels.setPixelColor(yellow_green_index[i + 4], yellow_green_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(yellow_green_index[i], yellow_green_color[i]);
    pixels.setPixelColor(yellow_green_index[i + 1], yellow_green_color[i + 1]);
    pixels.setPixelColor(yellow_green_index[i + 2], yellow_green_color[i + 2]);
    pixels.setPixelColor(yellow_green_index[i + 3], yellow_green_color[i + 3]);
    pixels.setPixelColor(yellow_green_index[i + 4], yellow_green_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void green_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(green_index[i], green_color[i]);
    pixels.setPixelColor(green_index[i + 1], green_color[i + 1]);
    pixels.setPixelColor(green_index[i + 2], green_color[i + 2]);
    pixels.setPixelColor(green_index[i + 3], green_color[i + 3]);
    pixels.setPixelColor(green_index[i + 4], green_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(green_index[i], green_color[i]);
    pixels.setPixelColor(green_index[i + 1], green_color[i + 1]);
    pixels.setPixelColor(green_index[i + 2], green_color[i + 2]);
    pixels.setPixelColor(green_index[i + 3], green_color[i + 3]);
    pixels.setPixelColor(green_index[i + 4], green_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void cyan_green_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(cyan_green_index[i], cyan_green_color[i]);
    pixels.setPixelColor(cyan_green_index[i + 1], cyan_green_color[i + 1]);
    pixels.setPixelColor(cyan_green_index[i + 2], cyan_green_color[i + 2]);
    pixels.setPixelColor(cyan_green_index[i + 3], cyan_green_color[i + 3]);
    pixels.setPixelColor(cyan_green_index[i + 4], cyan_green_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(cyan_green_index[i], cyan_green_color[i]);
    pixels.setPixelColor(cyan_green_index[i + 1], cyan_green_color[i + 1]);
    pixels.setPixelColor(cyan_green_index[i + 2], cyan_green_color[i + 2]);
    pixels.setPixelColor(cyan_green_index[i + 3], cyan_green_color[i + 3]);
    pixels.setPixelColor(cyan_green_index[i + 4], cyan_green_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void blue_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(blue_index[i], blue_color[i]);
    pixels.setPixelColor(blue_index[i + 1], blue_color[i + 1]);
    pixels.setPixelColor(blue_index[i + 2], blue_color[i + 2]);
    pixels.setPixelColor(blue_index[i + 3], blue_color[i + 3]);
    pixels.setPixelColor(blue_index[i + 4], blue_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(blue_index[i], blue_color[i]);
    pixels.setPixelColor(blue_index[i + 1], blue_color[i + 1]);
    pixels.setPixelColor(blue_index[i + 2], blue_color[i + 2]);
    pixels.setPixelColor(blue_index[i + 3], blue_color[i + 3]);
    pixels.setPixelColor(blue_index[i + 4], blue_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void violet_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(violet_index[i], violet_color[i]);
    pixels.setPixelColor(violet_index[i + 1], violet_color[i + 1]);
    pixels.setPixelColor(violet_index[i + 2], violet_color[i + 2]);
    pixels.setPixelColor(violet_index[i + 3], violet_color[i + 3]);
    pixels.setPixelColor(violet_index[i + 4], violet_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(violet_index[i], violet_color[i]);
    pixels.setPixelColor(violet_index[i + 1], violet_color[i + 1]);
    pixels.setPixelColor(violet_index[i + 2], violet_color[i + 2]);
    pixels.setPixelColor(violet_index[i + 3], violet_color[i + 3]);
    pixels.setPixelColor(violet_index[i + 4], violet_color[i + 4]);
    pixels.show();
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void light_pink_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(light_pink_index[i], light_pink_color[i]);
    pixels.setPixelColor(light_pink_index[i + 1], light_pink_color[i + 1]);
    pixels.setPixelColor(light_pink_index[i + 2], light_pink_color[i + 2]);
    pixels.setPixelColor(light_pink_index[i + 3], light_pink_color[i + 3]);
    pixels.setPixelColor(light_pink_index[i + 4], light_pink_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(light_pink_index[i], light_pink_color[i]);
    pixels.setPixelColor(light_pink_index[i + 1], light_pink_color[i + 1]);
    pixels.setPixelColor(light_pink_index[i + 2], light_pink_color[i + 2]);
    pixels.setPixelColor(light_pink_index[i + 3], light_pink_color[i + 3]);
    pixels.setPixelColor(light_pink_index[i + 4], light_pink_color[i + 4]);
    pixels.show();  
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void white_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(white_index[i], white_color[i]);
    pixels.setPixelColor(white_index[i + 1], white_color[i + 1]);
    pixels.setPixelColor(white_index[i + 2], white_color[i + 2]);
    pixels.setPixelColor(white_index[i + 3], white_color[i + 3]);
    pixels.setPixelColor(white_index[i + 4], white_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(white_index[i], white_color[i]);
    pixels.setPixelColor(white_index[i + 1], white_color[i + 1]);
    pixels.setPixelColor(white_index[i + 2], white_color[i + 2]);
    pixels.setPixelColor(white_index[i + 3], white_color[i + 3]);
    pixels.setPixelColor(white_index[i + 4], white_color[i + 4]);
    pixels.show(); 
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void rgb_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {   
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(RGB_index[i], RGB_color[i]);
    pixels.setPixelColor(RGB_index[i + 1], RGB_color[i + 1]);
    pixels.setPixelColor(RGB_index[i + 2], RGB_color[i + 2]);
    pixels.setPixelColor(RGB_index[i + 3], RGB_color[i + 3]);
    pixels.setPixelColor(RGB_index[i + 4], RGB_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(RGB_index[i], RGB_color[i]);
    pixels.setPixelColor(RGB_index[i + 1], RGB_color[i + 1]);
    pixels.setPixelColor(RGB_index[i + 2], RGB_color[i + 2]);
    pixels.setPixelColor(RGB_index[i + 3], RGB_color[i + 3]);
    pixels.setPixelColor(RGB_index[i + 4], RGB_color[i + 4]);
    pixels.show();   
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void rainbow_night_rider()
{
  for(int i = 0; i <= LED_COUNT - 5; i++)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(rainbow_index[i], rainbow_color[i]);
    pixels.setPixelColor(rainbow_index[i + 1], rainbow_color[i + 1]);
    pixels.setPixelColor(rainbow_index[i + 2], rainbow_color[i + 2]);
    pixels.setPixelColor(rainbow_index[i + 3], rainbow_color[i + 3]);
    pixels.setPixelColor(rainbow_index[i + 4], rainbow_color[i + 4]);
    pixels.show(); 
    delay(s);
    pixels.setPixelColor(black_index[i], black_color[i]);
    pixels.show(); 
    delay(5);   
  }

  for(int i = LED_COUNT - 5; i >= 0; i--)
  {
    if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW)
    {
      sw_judge();
    } 
    pixels.setPixelColor(rainbow_index[i], rainbow_color[i]);
    pixels.setPixelColor(rainbow_index[i + 1], rainbow_color[i + 1]);
    pixels.setPixelColor(rainbow_index[i + 2], rainbow_color[i + 2]);
    pixels.setPixelColor(rainbow_index[i + 3], rainbow_color[i + 3]);
    pixels.setPixelColor(rainbow_index[i + 4], rainbow_color[i + 4]);
    pixels.show();   
    delay(s);
    if(i > 0)
    {
      pixels.setPixelColor(black_index[i + 4], black_color[i + 4]);
      pixels.show();
    }
    else
    {
      // 先頭のLEDが一番上まで戻ってきた時だけ後尾のLEDを消さない
      break;
    }
    delay(5);
  }  
}

void rgb_roop()
{
  for(int i = 0; i < LED_COUNT; i++) 
  {    
    pixels.clear();    
    for(int j = 0; j < LED_COUNT; j++) 
    {
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW){
        sw_judge();
      } 
      RGB_index[j] = i + 19 - j;
      if(RGB_index[j] >= LED_COUNT) RGB_index[j] -= LED_COUNT;
      
      pixels.setPixelColor(RGB_index[j], RGB_color[j]);
    }
    pixels.begin();
    pixels.show();
    delay(s);
  }
}

void rainbow_roop()
{
  for(int i = 0; i < LED_COUNT; i++) 
  {    
    pixels.clear();    
    for(int j = 0; j < LED_COUNT; j++) 
    {
      if(digitalRead(SW1_PIN) == LOW || digitalRead(SW2_PIN) == LOW){
        sw_judge();
      }
      rainbow_index[j] = i + 19 - j;
      if(rainbow_index[j] >= LED_COUNT) rainbow_index[j] -= LED_COUNT;
      
      pixels.setPixelColor(rainbow_index[j], rainbow_color[j]);
    }
    pixels.begin();
    pixels.show();
    delay(s);
  }
}
