#include <iostream>
#include "ctime"
#include "vector"
#include "array"
#include <iomanip>
#include "cstdlib"

using namespace std;

int main() {
    // 1、为父女取名
    /*父亲姓名*/
    string value_father_name;
    /*女儿姓名*/
    string value_daughter_name;
    /*女儿生日月份*/
    int value_birth_month = 6;
    /*女儿生日日期*/
    int value_birth_date = 6;

    int value_daughter_gold = 500;

    // 2、为女儿录入初始信息、生日，星座
//            根据女儿的星座，设置游戏的初始参数（体力，魅力，智力，道德，气质）
    /*星座*/
    string value_daughter_constell;

    string constell_names[12][2] = {
            {"山羊座", "水瓶座"},//一月
            {"水瓶座", "双鱼座"},//二月
            {"双鱼座", "白羊座"},//三月
            {"白羊座", "金牛座"},//四月
            {"金牛座", "双子座"},//五月
            {"双子座", "巨蟹座"},//六月
            {"巨蟹座", "狮子座"},//七月
            {"狮子座", "处女座"},//八月
            {"处女座", "天秤座"},//九月
            {"天秤座", "天蝎座"},//十月
            {"天蝎座", "射手座"},//十一月
            {"射手座", "山羊座"}//十二月
    };

    cout << "父亲的姓名";
    cin >> value_father_name;
    cout << "女儿的姓名";
    cin >> value_daughter_name;
    cout << "女儿的生日（MM DD）";
    cin >> value_birth_month >> value_birth_date;

    /*星座日期*/
    int constell_dates[] = {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    // 星座计算
    value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date /
                                                                    constell_dates[value_birth_month - 1]];

    cout << "女儿的信息：" << endl;
    cout << "女儿的姓名叫做：" << value_daughter_name << endl;
    cout << "父亲：" << value_father_name << endl;
    cout << "生日：1659-" << value_birth_month << "-" << value_birth_date << endl;
    cout << "星座：" << value_daughter_constell << endl;

    /*女儿的基本信息，体，智...*/
    /*固定5个int空间的数组*/
    array<int, 5> value_vec_baseinfo;
    array<string, 5> value_vec_basename = {"体力", "智力", "魅力", "气质", "道德"};
    int choice, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;


    if (value_daughter_constell == "白羊座") {
        value_vec_baseinfo[0] = 80;
        value_vec_baseinfo[1] = 15;
        value_vec_baseinfo[2] = 15;
        value_vec_baseinfo[3] = 11;
        value_vec_baseinfo[4] = 21;
    } else if (value_daughter_constell == "金牛座") {
        value_vec_baseinfo[0] = 46;
        value_vec_baseinfo[1] = 30;
        value_vec_baseinfo[2] = 28;
        value_vec_baseinfo[3] = 5;
        value_vec_baseinfo[4] = 15;
    } else if (value_daughter_constell == "双子座") {
        value_vec_baseinfo[0] = 50;
        value_vec_baseinfo[1] = 35;
        value_vec_baseinfo[2] = 23;
        value_vec_baseinfo[3] = 15;
        value_vec_baseinfo[4] = 25;
    } else if (value_daughter_constell == "巨蟹座") {
        value_vec_baseinfo[0] = 40;
        value_vec_baseinfo[1] = 31;
        value_vec_baseinfo[2] = 33;
        value_vec_baseinfo[3] = 21;
        value_vec_baseinfo[4] = 11;
    } else if (value_daughter_constell == "狮子座") {
        value_vec_baseinfo[0] = 85;
        value_vec_baseinfo[1] = 3;
        value_vec_baseinfo[2] = 11;
        value_vec_baseinfo[3] = 25;
        value_vec_baseinfo[4] = 35;
    } else if (value_daughter_constell == "处女座") {
        value_vec_baseinfo[0] = 35;
        value_vec_baseinfo[1] = 28;
        value_vec_baseinfo[2] = 36;
        value_vec_baseinfo[3] = 35;
        value_vec_baseinfo[4] = 35;
    } else if (value_daughter_constell == "天秤座") {
        value_vec_baseinfo[0] = 46;
        value_vec_baseinfo[1] = 30;
        value_vec_baseinfo[2] = 28;
        value_vec_baseinfo[3] = 5;
        value_vec_baseinfo[4] = 15;
    } else if (value_daughter_constell == "天蝎座") {
        value_vec_baseinfo[0] = 50;
        value_vec_baseinfo[1] = 25;
        value_vec_baseinfo[2] = 40;
        value_vec_baseinfo[3] = 15;
        value_vec_baseinfo[4] = 11;
    } else if (value_daughter_constell == "射手座") {
        value_vec_baseinfo[0] = 57;
        value_vec_baseinfo[1] = 31;
        value_vec_baseinfo[2] = 15;
        value_vec_baseinfo[3] = 16;
        value_vec_baseinfo[4] = 15;
    } else if (value_daughter_constell == "山羊座") {
        value_vec_baseinfo[0] = 56;
        value_vec_baseinfo[1] = 21;
        value_vec_baseinfo[2] = 16;
        value_vec_baseinfo[3] = 11;
        value_vec_baseinfo[4] = 9;
    } else if (value_daughter_constell == "水瓶座") {
        value_vec_baseinfo[0] = 43;
        value_vec_baseinfo[1] = 43;
        value_vec_baseinfo[2] = 20;
        value_vec_baseinfo[3] = 15;
        value_vec_baseinfo[4] = 25;
    } else if (value_daughter_constell == "双鱼座") {
        value_vec_baseinfo[0] = 41;
        value_vec_baseinfo[1] = 21;
        value_vec_baseinfo[2] = 29;
        value_vec_baseinfo[3] = 10;
        value_vec_baseinfo[4] = 31;
    }
    // 3、开始游戏大循环
    //从1659年6月开始
    for (int year = 1659; year <= 1659 + 2; year++) {
        // 如果year=1659，从6月开始，否则从1月开始
        for (int month = (year == 1659) ? 6 : 1; month <= 12; ++month) {
            //判断女儿的生日
            if (month == value_birth_month) {
                cout << "本月是" << value_daughter_name << "的生日，是否要赠送礼物？（1/0）" << endl;
                //判断是否赠送
                cin >> choice;
                srand(time(NULL));
                if (choice == 1) {
                    tmp1 = rand() % 100;
                    value_vec_baseinfo[0] += tmp2 = rand() % 31;
                    value_vec_baseinfo[1] += tmp3 = rand() % 31;
                    value_vec_baseinfo[2] += tmp4 = rand() % 31;
                    value_vec_baseinfo[3] += tmp5 = rand() % 31;
                    value_vec_baseinfo[4] += tmp6 = rand() % 31;
                    cout << "女儿看到你送的玉佩很开心～" << endl;
                    cout << "体力+" << tmp2 << "\t" << "智力+" << tmp3 << "\t" << "魅力+" << tmp4 << "\t" << "气质+" << tmp5
                         << "\t" << "道德+" << tmp6 << "\t" << "金钱-" << tmp1 << endl;
                } else {
                    value_vec_baseinfo[0] -= tmp2 = rand() % 11;
                    value_vec_baseinfo[1] -= tmp3 = rand() % 11;
                    value_vec_baseinfo[2] -= tmp4 = rand() % 11;
                    value_vec_baseinfo[3] -= tmp5 = rand() % 11;
                    value_vec_baseinfo[4] -= tmp6 = rand() % 11;
                    cout << "女儿没有收到礼物，很不开心～" << endl;
                    cout << "体力-" << tmp2 << "\t" << "智力-" << tmp3 << "\t" << "魅力-" << tmp4 << "\t" << "气质-" << tmp5
                         << "\t" << "道德-" << tmp6 << endl;
                }

            }
            //显示游戏主菜单
            cout << "\n1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档\n5、读档" << endl;
            cin >> choice;
            switch (choice) {
                case 1://查看状态
                    cout << "女儿的信息：" << endl;
                    cout << "女儿的姓名叫做：" << value_daughter_name << endl;
                    cout << "父亲：" << value_father_name << endl;
                    cout << "生日：1659-" << value_birth_month << "-" << value_birth_date << endl;
                    cout << "星座：" << value_daughter_constell << endl;
                    cout << "金钱：" << value_daughter_gold << endl;
                    //打印核心属性
                    cout << left;
                    for (int i = 0; i < 5; ++i) {
                        cout << value_vec_basename[i] << ": " << setw(6) << value_vec_baseinfo[i];
                        //计算实心方框的数量
                        int solidCount = value_vec_baseinfo[i] / 10;
                        for (int j = 0; j < 10; j++) {
                            if (j < solidCount) {
                                cout << "■";
                            } else {
                                cout << "□";
                            }
                        }

                        cout << endl;
                    }
                    break;

                case 2://安排行程：一个月最多安排三个行程
                {//函数体，这样才可以定义string month_parts[]这样的局部变量
                    string month_parts[] = {"上旬", "中旬", "下旬"};
                    for (int k = 0; k < 3; ++k) {
                        cout << "--" << month << "月--" << month_parts[k] << endl;
                        cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << endl;
                        cout << "请选择：";
                        cin >> choice;
                        // 没钱强制打工
                        srand(time(NULL));
                        if (choice == 1) {//体力魅力上升-金钱
                            value_vec_baseinfo[0] += tmp1 = rand() % 11;
                            value_vec_baseinfo[2] += tmp2 = rand() % 11;
                            value_daughter_gold -= tmp3 = rand() % 51;

                            cout << "跟着剑圣大师学习剑术，女儿获得了一些冥想值收益" << endl;
                            cout << "体力+" << tmp1 << "\t" << "魅力+" << tmp2 << "\t" << "金钱-" << tmp3 << endl;
                        } else if (choice == 2) {
                            value_vec_baseinfo[1] += tmp1 = rand() % 31;
                            value_vec_baseinfo[2] += tmp2 = rand() % 31;
                            value_vec_baseinfo[3] += tmp3 = rand() % 31;
                            value_vec_baseinfo[4] += tmp4 = rand() % 31;
                            value_daughter_gold -= tmp5 = rand() % 100;

                            cout << "跟着国子监学习五经，女儿的琴棋书画又精通了一些" << endl;
                            cout << "智力+" << tmp1 << "\t" << "魅力+" << tmp2 << "\t" << "气质+" << tmp3 << "\t" << "道德+"
                                 << tmp4 << "\t" << "金钱-" << tmp5 << endl;
                        } else if (choice == 3) {
                            value_vec_baseinfo[1] += tmp1 = rand() % 21;
                            value_vec_baseinfo[2] += tmp2 = rand() % 31;
                            value_vec_baseinfo[3] += tmp3 = rand() % 41;
                            value_vec_baseinfo[4] += tmp4 = rand() % 51;
                            value_daughter_gold -= tmp5 = rand() % 200;

                            cout << "跟着王妃学习礼法，女儿的歌舞才学又增益了些许" << endl;
                            cout << "智力+" << tmp1 << "\t" << "魅力+" << tmp2 << "\t" << "气质+" << tmp3 << "\t" << "道德+"
                                 << tmp4 << "\t" << "金钱-" << tmp5 << endl;
                        } else if (choice == 4) {
                            value_vec_baseinfo[0] += tmp1 = rand() % 21;
                            value_vec_baseinfo[2] -= tmp2 = rand() % 5;
                            value_vec_baseinfo[3] -= tmp3 = rand() % 5;
                            value_vec_baseinfo[4] -= tmp4 = rand() % 10;
                            value_daughter_gold += tmp5 = rand() % 20;

                            cout << "出城修行是苦难的，女儿赚到不少钱，但是遗忘了很多知识" << endl;
                            cout << "体力+" << tmp1 << "\t" << "魅力-" << tmp2 << "\t" << "气质-" << tmp3 << "\t" << "道德-"
                                 << tmp4 << "\t" << "金钱+" << tmp5 << endl;
                        } else if (choice == 5) {
                            value_vec_baseinfo[0] -= tmp1 = rand() % 31;
                            value_vec_baseinfo[2] -= tmp2 = rand() % 25;
                            value_vec_baseinfo[3] -= tmp3 = rand() % 15;
                            value_vec_baseinfo[4] -= tmp4 = rand() % 10;
                            value_daughter_gold += tmp5 = rand() % 100;

                            cout << "去柳街辛劳之后，女儿大获丰收，但是没时间温习知识了" << endl;
                            cout << "体力-" << tmp1 << "\t" << "魅力-" << tmp2 << "\t" << "气质-" << tmp3 << "\t" << "道德-"
                                 << tmp4 << "\t" << "金钱+" << tmp5 << endl;
                        }

                    }
                    break;
                }
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                default:
                    break;
            }
        }
    }

    // 4、根据各项参数判断游戏结果
    return 0;
}