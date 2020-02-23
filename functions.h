#include "primitive_data.h"
#include "declarations.h"


void emotion_chooser(int choice) {
  switch (choice) {
    case 1:// flashlight
      for (int j = 0; j < 6; j++) {
        face.setIntensity(j, 7);
        for (int i = 0; i < 8; i++) {
          face.setRow(j, i, eye[32][0]);
        }
      }
      break;
    case 128:
      break;
    case 129:
      break;
    case 130:
      break;
    case 131: //blink
      for (int j = 23; j <= 27; j++) {
        for (int i = 0; i < 8; i++) {
          face.setRow(1, i, eye[j][i]);
          face.setRow(0, i, eye[j][i]);
        }
        delay(animation_speed);
      }
      face.clearDisplay(0);
      face.clearDisplay(1);
      delay(animation_speed);
      for (int j = 27; j >= 23; j--) {
        for (int i = 0; i < 8; i++) {
          face.setRow(1, i, eye[j][i]);
          face.setRow(0, i, eye[j][i]);
        }
        delay(animation_speed);
      }
      emotion_chooser(current_emotion);
      break;
    case 132:
      break;
    case 250:
      for (int i = 0; i < 6; i++) {
        face.clearDisplay(i);
      }
      break;
    case 2:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 3:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 4:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 5:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 6:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 7:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 8:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 9:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 10:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 11:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 12:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[0][i]);
        face.setRow(0, i, eye[0][i]);
      }
      break;
    case 13:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 14:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 15:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 16:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 17:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 18:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 19:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 20:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 21:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 22:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 23:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[1][i]);
        face.setRow(0, i, eye[1][i]);
      }
      break;
    case 24:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 25:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 26:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 27:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 28:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 29:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 30:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 31:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 32:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 33:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 34:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[2][i]);
        face.setRow(0, i, eye[2][i]);
      }
      break;
    case 35:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 36:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 37:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 38:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 39:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 40:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 41:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 42:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 43:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 44:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 45:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[4][i]);
        face.setRow(0, i, eye[3][i]);
      }
      break;
    case 46:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 47:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 48:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 49:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 50:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 51:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 52:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 53:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 54:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 55:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 56:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[6][i]);
        face.setRow(0, i, eye[5][i]);
      }
      break;
    case 57:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 58:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 59:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 60:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 61:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 62:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 63:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 64:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 65:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 66:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 67:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[7][i]);
        face.setRow(0, i, eye[7][i]);
      }
      break;
    case 68:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 69:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 70:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 71:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 72:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 73:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 74:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 75:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 76:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 77:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 78:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[8][i]);
        face.setRow(0, i, eye[8][i]);
      }
      break;
    case 79:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 80:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 81:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 82:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 83:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 84:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 85:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 86:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 87:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 88:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 89:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[10][i]);
        face.setRow(0, i, eye[9][i]);
      }
      break;
    case 90:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 91:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 92:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 93:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 94:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 95:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 96:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 97:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 98:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 99:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 100:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[9][i]);
        face.setRow(0, i, eye[10][i]);
      }
      break;
    case 101:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smile[1][i]);
        face.setRow(4, i, lp_smile[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 102:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 103:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_D[1][i]);
        face.setRow(4, i, lp_D[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 104:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_sad[1][i]);
        face.setRow(4, i, lp_sad[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 105:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_P[1][i]);
        face.setRow(4, i, lp_P[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 106:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_O[1][i]);
        face.setRow(4, i, lp_O[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 107:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_V[1][i]);
        face.setRow(4, i, lp_V[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 108:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_chinup[1][i]);
        face.setRow(4, i, lp_chinup[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 109:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_smirk[1][i]);
        face.setRow(4, i, lp_smirk[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 110:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_Pout[1][i]);
        face.setRow(4, i, lp_Pout[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 111:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_kiss[1][i]);
        face.setRow(4, i, lp_kiss[0][i]);
        face.setRow(1, i, eye[19][i]);
        face.setRow(0, i, eye[19][i]);
      }
      break;
    case 112:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[11][i]);
        face.setRow(0, i, eye[11][i]);
      }
      break;
    case 113:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[11][i]);
        face.setRow(0, i, eye[11][i]);
      }
      break;
    case 114:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[12][i]);
        face.setRow(0, i, eye[12][i]);
      }
      break;
    case 115:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[12][i]);
        face.setRow(0, i, eye[12][i]);
      }
      break;
    case 116:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[13][i]);
        face.setRow(0, i, eye[13][i]);
      }
      break;
    case 117:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[13][i]);
        face.setRow(0, i, eye[13][i]);
      }
      break;
    case 118:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[14][i]);
        face.setRow(0, i, eye[14][i]);
      }
      break;
    case 119:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[14][i]);
        face.setRow(0, i, eye[14][i]);
      }
      break;
    case 120:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[15][i]);
        face.setRow(0, i, eye[15][i]);
      }
      break;
    case 121:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[15][i]);
        face.setRow(0, i, eye[15][i]);
      }
      break;
    case 122:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[16][i]);
        face.setRow(0, i, eye[16][i]);
      }
      break;
    case 123:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[16][i]);
        face.setRow(0, i, eye[16][i]);
      }
      break;
    case 124:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[17][i]);
        face.setRow(0, i, eye[17][i]);
      }
      break;
    case 125:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[17][i]);
        face.setRow(0, i, eye[17][i]);
      }
      break;
    case 126:
      for (int i = 0; i < 8; i++) {
        face.setRow(1, i, eye[18][i]);
        face.setRow(0, i, eye[18][i]);
      }
      break;
    case 127:
      for (int i = 0; i < 8; i++) {
        face.setRow(3, i, lp_pipe[1][i]);
        face.setRow(4, i, lp_pipe[0][i]);
        face.setRow(1, i, eye[18][i]);
        face.setRow(0, i, eye[18][i]);
      }
      break;
  }
}

boolean isBlinkable(byte data) {
  if (data >= 2 && data <= 127)
    return true;
  for (byte i = 0; i < sizeof(toBlink) / sizeof(byte); i++) {
    if (toBlink[i] == data)
      return true;
  }

  return false;
}

void change_intensity(int new_intensity) {
  //check intensity
  if (new_intensity > 8)
    Serial.println("**Error:too high intensity**\n");
  else if (new_intensity < 0)
    Serial.println("**Error: too low intensity**\n");
  else
    intensity = new_intensity;
}

int analys_s(String s){
//  Serial.println(s);
  if(s.indexOf("intensity") >= 0 ){
   return -7; 
  }
  else{
      return s.toInt();
  }
}

void restart_face() {
  for (int i = 0; i < 6; i++) {
    face.shutdown(i, false);
    face.setIntensity(i, intensity);
    face.clearDisplay(i);
  }
}
