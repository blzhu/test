#ifndef TONELIB_DEFINE
#define TONELIB_DEFINE

//int melody(char s) {  // 频率
//    if      (s == 't') { return 262; }   // 低音1#
//    else if (s == 'u') { return 294; }   // 低音2#
//    else if (s == 'v') { return 330; }   // 低音3#
//    else if (s == 'w') { return 349; }   // 低音4#
//    else if (s == 'x') { return 392; }   // 低音5#
//    else if (s == 'y') { return 440; }   // 低音6#
//    else if (s == 'z') { return 494; }   // 低音7#
//    else if (s == '1') { return 523; }   // 中音1#
//    else if (s == '2') { return 578; }   // 中音2#
//    else if (s == '3') { return 659; }   // 中音3#
//    else if (s == '4') { return 698; }   // 中音4#
//    else if (s == '5') { return 784; }   // 中音5#
//    else if (s == '6') { return 880; }   // 中音6# 
//    else if (s == '7') { return 988; }   // 中音7#
//    else if (s == 'a') { return 1046; }  // 高音1#
//    else if (s == 'b') { return 1175; }  // 高音2#
//    else if (s == 'c') { return 1318; }  // 高音3#
//    else if (s == 'd') { return 1397; }  // 高音4#
//    else if (s == 'e') { return 1568; }  // 高音5#
//    else if (s == 'f') { return 1760; }  // 高音6#
//    else if (s == 'g') { return 1976; }  // 高音7#
//    else { return  0; }
//}
//
//int port(char s) { // 发音同时点亮哪个端口的LED
//    if      (s == 't') { return 2; }   // 低音1#
//    else if (s == 'u') { return 3; }   // 低音2#
//    else if (s == 'v') { return 4; }   // 低音3#
//    else if (s == 'w') { return 5; }   // 低音4#
//    else if (s == 'x') { return 6; }   // 低音5#
//    else if (s == 'y') { return 7; }   // 低音6#
//    else if (s == 'z') { return 8; }   // 低音7#
//    else if (s == '1') { return 2; }   // 中音1#
//    else if (s == '2') { return 3; }   // 中音2#
//    else if (s == '3') { return 4; }   // 中音3#
//    else if (s == '4') { return 5; }   // 中音4#
//    else if (s == '5') { return 6; }   // 中音5#
//    else if (s == '6') { return 7; }   // 中音6# 
//    else if (s == '7') { return 8; }   // 中音7#
//    else if (s == 'a') { return 2; }  // 高音1#
//    else if (s == 'b') { return 3; }  // 高音2#
//    else if (s == 'c') { return 4; }  // 高音3#
//    else if (s == 'd') { return 5; }  // 高音4#
//    else if (s == 'e') { return 6; }  // 高音5#
//    else if (s == 'f') { return 7; }  // 高音6#
//    else if (s == 'g') { return 8; }  // 高音7#
//    else { return  0; }
//}
//
//int duration(char s, int speed) {  // 算出节拍时长
//    float unit = 60000 / speed;
//    if      (s == 'x') { return int(unit * 4); }       // 4拍
//    else if (s == 'y') { return int(unit * 3); }       // 3拍
//    else if (s == 'z') { return int(unit * 2); }       // 2拍
//    else if (s == 'a') { return int(unit * 1.5); }     // 1拍 延音
//    else if (s == '1') { return int(unit * 1); }       // 1拍
//    else if (s == 'b') { return int(unit * 0.75); }    // 1/2拍 延音
//    else if (s == '2') { return int(unit * 0.5); }     // 1/2拍
//    else if (s == 'c') { return int(unit * 0.375); }   // 1/4拍 延音
//    else if (s == '3') { return int(unit * 0.25); }    // 1/4拍
//    else if (s == '4') { return int(unit * 0.125); }   // 1/8拍
//    else { return  0; }
//}


int melody(char s) {  // 频率
    if      (s == 'd') { return 262; }   // 低音1#
    else if (s == 'r') { return 294; }   // 低音2#
    else if (s == 'm') { return 330; }   // 低音3#
    else if (s == 'f') { return 349; }   // 低音4#
    else if (s == 's') { return 392; }   // 低音5#
    else if (s == 'l') { return 440; }   // 低音6#
    else if (s == 'x') { return 494; }   // 低音7#
    else if (s == '1') { return 523; }   // 中音1#
    else if (s == '2') { return 578; }   // 中音2#
    else if (s == '3') { return 659; }   // 中音3#
    else if (s == '4') { return 698; }   // 中音4#
    else if (s == '5') { return 784; }   // 中音5#
    else if (s == '6') { return 880; }   // 中音6# 
    else if (s == '7') { return 988; }   // 中音7#
    else if (s == 'D') { return 1046; }  // 高音1#
    else if (s == 'R') { return 1175; }  // 高音2#
    else if (s == 'M') { return 1318; }  // 高音3#
    else if (s == 'F') { return 1397; }  // 高音4#
    else if (s == 'S') { return 1568; }  // 高音5#
    else if (s == 'L') { return 1760; }  // 高音6#
    else if (s == 'X') { return 1976; }  // 高音7#
    else { return  0; }
}

int port(char s) { // 发音同时点亮哪个端口的LED
    if      (s == 'd') { return 2; }   // 低音1#
    else if (s == 'r') { return 3; }   // 低音2#
    else if (s == 'm') { return 4; }   // 低音3#
    else if (s == 'f') { return 5; }   // 低音4#
    else if (s == 's') { return 6; }   // 低音5#
    else if (s == 'l') { return 7; }   // 低音6#
    else if (s == 'x') { return 8; }   // 低音7#
    else if (s == '1') { return 2; }   // 中音1#
    else if (s == '2') { return 3; }   // 中音2#
    else if (s == '3') { return 4; }   // 中音3#
    else if (s == '4') { return 5; }   // 中音4#
    else if (s == '5') { return 6; }   // 中音5#
    else if (s == '6') { return 7; }   // 中音6# 
    else if (s == '7') { return 8; }   // 中音7#
    else if (s == 'D') { return 2; }  // 高音1#
    else if (s == 'R') { return 3; }  // 高音2#
    else if (s == 'M') { return 4; }  // 高音3#
    else if (s == 'F') { return 5; }  // 高音4#
    else if (s == 'S') { return 6; }  // 高音5#
    else if (s == 'L') { return 7; }  // 高音6#
    else if (s == 'X') { return 8; }  // 高音7#
    else { return  0; }
}

int duration(char s, int speed) {  // 算出节拍时长
    float unit = 60000 / speed;
    if      (s == 'd') { return int(unit * 4); }       // 4拍
    else if (s == 'c') { return int(unit * 3); }       // 3拍
    else if (s == 'b') { return int(unit * 2); }       // 2拍
    else if (s == 'a') { return int(unit * 1.5); }     // 1拍 延音
    else if (s == '1') { return int(unit * 1); }       // 1拍
    else if (s == '2') { return int(unit * 0.5); }     // 1/2拍
    else if (s == '3') { return int(unit * 0.75); }    // 1/2拍 延音
    else if (s == '4') { return int(unit * 0.25); }    // 1/4拍
    else if (s == '5') { return int(unit * 0.375); }   // 1/4拍 延音
    else if (s == '8') { return int(unit * 0.125); }   // 1/8拍
    else { return  0; }
}
#endif
