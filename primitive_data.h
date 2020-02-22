const byte eye[][8] = {
  {// normal - 1
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  {// dot - 2
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000,
    B00000000
  },
  { // roll eye - 3
    B00000000,
    B00000000,
    B00111110,
    B01000001,
    B00000110,
    B00000110,
    B00000000,
    B00000000
  },
  { // less than - 4
    B00000000,
    B00000000,
    B00000100,
    B00000010,
    B00000001,
    B00000010,
    B00000100,
    B00000000
  },
  { // greater than - 5
    B00000000,
    B00000000,
    B00100000,
    B01000000,
    B10000000,
    B01000000,
    B00100000,
    B00000000
  },
  { // eye susp_1 - 6
    B00000000,
    B00000000,
    B00000000,
    B00111000,
    B00000100,
    B00011000,
    B00011000,
    B00000000
  },
  { // eye susp_2 - 7
    B00000000,
    B00001110,
    B00010000,
    B00100000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
  },
  { // eye line pinch - 8
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B00000000,
    B00000000,
    B00000000
  },
  { // happy raised - 9
    B00000000,
    B00111100,
    B01111110,
    B01000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  { // inclined brow - 10
    B00000000,
    B00001110,
    B00010010,
    B00100010,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  { // declined brow - 11
    B00000000,
    B01110000,
    B01001000,
    B01000100,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  { // up_left - 12
    B11010000,
    B11010000,
    B11010000,
    B00010000,
    B00010000,
    B11100000,
    B00000000,
    B00000000
  },
  { // up - 13
    B01011010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100,
    B00000000,
    B00000000
  },
  { // up_right - 14
    B00001011,
    B00001011,
    B00001011,
    B00001000,
    B00001000,
    B00000111,
    B00000000,
    B00000000
  },
  { // right - 15
    B00000000,
    B00000111,
    B00001000,
    B00001011,
    B00001011,
    B00001011,
    B00001000,
    B00000111
  },
  { // down_right - 16
    B00000000,
    B00000000,
    B00000111,
    B00001000,
    B00001000,
    B00001011,
    B00001011,
    B00001011
  },
  { // down - 17
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B01000010,
    B01011010,
    B01011010,
    B01011010
  },
  { // down_left - 18
    B00000000,
    B00000000,
    B11100000,
    B00010000,
    B00010000,
    B11010000,
    B11010000,
    B11010000
  },
  { // left - 19
    B00000000,
    B11100000,
    B00010000,
    B11010000,
    B11010000,
    B11010000,
    B00010000,
    B11100000
  },
  { // hearts - 20
    B00000000,
    B01100110,
    B10011001,
    B10011001,
    B10000001,
    B01000010,
    B00100100,
    B00011000
  },
  { // raise_brow_low - 21
    B00000000,
    B00000000,
    B00111100,
    B01000010,
    B00011000,
    B00011000,
    B00000000,
    B00000000
  },
  { // raise_brow_mid - 22
    B00000000,
    B00111100,
    B01000010,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
  },
  { // raise_brow_high - 23
    B00111100,
    B01000010,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
  },
  { // wakeup - 24
    B00000000,
    B00000000,
    B01111110,
    B01000010,
    B01011010,
    B01011010,
    B00100100,
    B00011000
  },
  { // wakeup - 25
    B00000000,
    B00000000,
    B01000010,
    B01111110,
    B01111110,
    B01000010,
    B00111100,
    B00000000
  },
  { // wakeup - 26
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B01111110,
    B01111110,
    B00111100,
    B00000000
  },
  { // wakeup - 27
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01111110,
    B00111100,
    B00000000
  },
  { // wakeup - 28
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01111110,
    B00000000,
    B00000000
  },
  { // update - 29
    B00011000,
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00000000,
    B00011000,
    B00011000
  },
  { // update - 30
    B00011000,
    B00011000,
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00000000,
    B00011000
  },
  { // update - 31
    B00011000,
    B00011000,
    B00011000,
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00000000
  },
  { // update - 32
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00000000,
    B00011000,
    B00011000,
    B00011000
  },
  { // ON_OFF - 33
  	B11111111,
    B00000000
  }
};
const byte lp_smile[][8] = {
  {
    B00000000,
    B00000000,
    B00000000,
    B00111000,
    B00011100,
    B00001111,
    B00000111,
    B00000000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00011100,
    B00111000,
    B11110000,
    B11100000,
    B00000000
  }
};
const byte lp_pipe[][8] = {
  {
    B00000000,
    B00000000,
    B00000000,
    B00001111,
    B00001111,
    B00000000,
    B00000000,
    B00000000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B11110000,
    B11110000,
    B00000000,
    B00000000,
    B00000000
  }
};
const byte lp_D[][8] = {
  {
    B00000000,
    B00000000,
    B11111111,
    B01111111,
    B00111111,
    B00001111,
    B00000011,
    B00000000
  }, {
    B00000000,
    B00000000,
    B11111111,
    B11111110,
    B11111100,
    B11110000,
    B11000000,
    B00000000
  }
};
const byte lp_sad[][8] = {
  {
    B00000000,
    B00000000,
    B00000111,
    B00001111,
    B00011100,
    B00111000,
    B00000000,
    B00000000
  }, {
    B00000000,
    B00000000,
    B11100000,
    B11110000,
    B00111000,
    B00011100,
    B00000000,
    B00000000
  }
};
const byte lp_P[][8] = {
  {
    B00000000,
    B00010000,
    B00010000,
    B00011000,
    B00001111,
    B00000000,
    B00000000,
    B00000000
  }, {
    B00000000,
    B00000100,
    B00000100,
    B00001100,
    B11111110,
    B00011110,
    B00001100,
    B00000000
  }
};
const byte lp_O[][8] = {
  {
    B00000000,
    B00000000,
    B00000001,
    B00000010,
    B00000010,
    B00000010,
    B00000001,
    B00000000
  }, {
    B00000000,
    B00000000,
    B10000000,
    B01000000,
    B01000000,
    B01000000,
    B10000000,
    B00000000
  }
};
const byte lp_V[][8] = {
  {
    B00000000,
    B00000000,
    B00000000,
    B00000001,
    B00000010,
    B00000001,
    B00000000,
    B00000000
  }, {
    B00000000,
    B01100000,
    B10000000,
    B00000000,
    B00000000,
    B00000000,
    B10000000,
    B01100000
  }
};
const byte lp_chinup[][8] = {
  {
    B00000000,
    B00000000,
    B00000000,
    B00000011,
    B00000100,
    B00011001,
    B00000010,
    B00000000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B11000000,
    B00100000,
    B10011000,
    B01000000,
    B00000000
  }
};
const byte lp_smirk[][8] = {
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000011,
    B00000000,
    B00000000
  }, {
    B00000000,
    B00000000,
    B00000010,
    B00000010,
    B00000100,
    B11111000,
    B00000000,
    B00000000
  }
};
const byte lp_Pout[][8] = {
  {
    B00000000,
    B00000110,
    B00000001,
    B00000000,
    B00000001,
    B00000000,
    B00000001,
    B00000110
  }, {
    B00000000,
    B00000000,
    B10000000,
    B01100000,
    B10000000,
    B01100000,
    B10000000,
    B00000000
  }
};
const byte lp_kiss[][8] = {
  {
    B00000000,
    B00000011,
    B00001100,
    B00000000,
    B00000000,
    B00000000,
    B00001100,
    B00000011
  }, {
    B00001100,
    B10010100,
    B01010111,
    B01010001,
    B10011110,
    B01000000,
    B01000000,
    B10000000
  }
};