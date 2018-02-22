/********************************************************************************
** Form generated from reading UI file 'statitcs_assignment.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATITCS_ASSIGNMENT_H
#define UI_STATITCS_ASSIGNMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statitcs_assignmentClass
{
public:
    QWidget *centralWidget;
    QPushButton *calculate_btn;
    QGraphicsView *peg_board_canvas;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *length_header;
    QPushButton *angle_header;
    QPushButton *x_coordinate_header;
    QPushButton *y_peg_header;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *spring1_length_ptext;
    QPlainTextEdit *spring1_angle_ptext;
    QTextEdit *spring1_xpin_etxt;
    QTextEdit *spring1_ypin_etxt;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *spring2_length_ptext;
    QPlainTextEdit *spring2_angle_ptext_2;
    QTextEdit *spring2_xpin_etxt;
    QTextEdit *spring2_ypin_etxt;
    QHBoxLayout *horizontalLayout_8;
    QPlainTextEdit *spring3_length_ptext_3;
    QPlainTextEdit *spring3_angle_ptext_3;
    QTextEdit *spring3_xpin_etxt;
    QTextEdit *spring3_ypin_etxt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *statitcs_assignmentClass)
    {
        if (statitcs_assignmentClass->objectName().isEmpty())
            statitcs_assignmentClass->setObjectName(QStringLiteral("statitcs_assignmentClass"));
        statitcs_assignmentClass->resize(672, 379);
        centralWidget = new QWidget(statitcs_assignmentClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        calculate_btn = new QPushButton(centralWidget);
        calculate_btn->setObjectName(QStringLiteral("calculate_btn"));
        calculate_btn->setGeometry(QRect(440, 152, 217, 169));
        peg_board_canvas = new QGraphicsView(centralWidget);
        peg_board_canvas->setObjectName(QStringLiteral("peg_board_canvas"));
        peg_board_canvas->setGeometry(QRect(8, 8, 421, 309));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(436, 12, 222, 129));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        length_header = new QPushButton(verticalLayoutWidget);
        length_header->setObjectName(QStringLiteral("length_header"));
        length_header->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(length_header);

        angle_header = new QPushButton(verticalLayoutWidget);
        angle_header->setObjectName(QStringLiteral("angle_header"));
        angle_header->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(angle_header);

        x_coordinate_header = new QPushButton(verticalLayoutWidget);
        x_coordinate_header->setObjectName(QStringLiteral("x_coordinate_header"));
        x_coordinate_header->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(x_coordinate_header);

        y_peg_header = new QPushButton(verticalLayoutWidget);
        y_peg_header->setObjectName(QStringLiteral("y_peg_header"));
        y_peg_header->setMaximumSize(QSize(50, 25));

        horizontalLayout_5->addWidget(y_peg_header);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        spring1_length_ptext = new QPlainTextEdit(verticalLayoutWidget);
        spring1_length_ptext->setObjectName(QStringLiteral("spring1_length_ptext"));
        spring1_length_ptext->setEnabled(false);
        spring1_length_ptext->setMaximumSize(QSize(50, 25));

        horizontalLayout_3->addWidget(spring1_length_ptext);

        spring1_angle_ptext = new QPlainTextEdit(verticalLayoutWidget);
        spring1_angle_ptext->setObjectName(QStringLiteral("spring1_angle_ptext"));
        spring1_angle_ptext->setEnabled(false);
        spring1_angle_ptext->setMaximumSize(QSize(50, 25));

        horizontalLayout_3->addWidget(spring1_angle_ptext);

        spring1_xpin_etxt = new QTextEdit(verticalLayoutWidget);
        spring1_xpin_etxt->setObjectName(QStringLiteral("spring1_xpin_etxt"));
        spring1_xpin_etxt->setMaximumSize(QSize(50, 25));

        horizontalLayout_3->addWidget(spring1_xpin_etxt);

        spring1_ypin_etxt = new QTextEdit(verticalLayoutWidget);
        spring1_ypin_etxt->setObjectName(QStringLiteral("spring1_ypin_etxt"));
        spring1_ypin_etxt->setMaximumSize(QSize(50, 25));

        horizontalLayout_3->addWidget(spring1_ypin_etxt);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        spring2_length_ptext = new QPlainTextEdit(verticalLayoutWidget);
        spring2_length_ptext->setObjectName(QStringLiteral("spring2_length_ptext"));
        spring2_length_ptext->setEnabled(false);
        spring2_length_ptext->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(spring2_length_ptext);

        spring2_angle_ptext_2 = new QPlainTextEdit(verticalLayoutWidget);
        spring2_angle_ptext_2->setObjectName(QStringLiteral("spring2_angle_ptext_2"));
        spring2_angle_ptext_2->setEnabled(false);
        spring2_angle_ptext_2->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(spring2_angle_ptext_2);

        spring2_xpin_etxt = new QTextEdit(verticalLayoutWidget);
        spring2_xpin_etxt->setObjectName(QStringLiteral("spring2_xpin_etxt"));
        spring2_xpin_etxt->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(spring2_xpin_etxt);

        spring2_ypin_etxt = new QTextEdit(verticalLayoutWidget);
        spring2_ypin_etxt->setObjectName(QStringLiteral("spring2_ypin_etxt"));
        spring2_ypin_etxt->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(spring2_ypin_etxt);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        spring3_length_ptext_3 = new QPlainTextEdit(verticalLayoutWidget);
        spring3_length_ptext_3->setObjectName(QStringLiteral("spring3_length_ptext_3"));
        spring3_length_ptext_3->setEnabled(false);
        spring3_length_ptext_3->setMaximumSize(QSize(50, 25));

        horizontalLayout_8->addWidget(spring3_length_ptext_3);

        spring3_angle_ptext_3 = new QPlainTextEdit(verticalLayoutWidget);
        spring3_angle_ptext_3->setObjectName(QStringLiteral("spring3_angle_ptext_3"));
        spring3_angle_ptext_3->setEnabled(false);
        spring3_angle_ptext_3->setMaximumSize(QSize(50, 25));

        horizontalLayout_8->addWidget(spring3_angle_ptext_3);

        spring3_xpin_etxt = new QTextEdit(verticalLayoutWidget);
        spring3_xpin_etxt->setObjectName(QStringLiteral("spring3_xpin_etxt"));
        spring3_xpin_etxt->setMaximumSize(QSize(50, 25));

        horizontalLayout_8->addWidget(spring3_xpin_etxt);

        spring3_ypin_etxt = new QTextEdit(verticalLayoutWidget);
        spring3_ypin_etxt->setObjectName(QStringLiteral("spring3_ypin_etxt"));
        spring3_ypin_etxt->setMaximumSize(QSize(50, 25));

        horizontalLayout_8->addWidget(spring3_ypin_etxt);


        verticalLayout_2->addLayout(horizontalLayout_8);

        statitcs_assignmentClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(statitcs_assignmentClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 21));
        statitcs_assignmentClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(statitcs_assignmentClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        statitcs_assignmentClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(statitcs_assignmentClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statitcs_assignmentClass->setStatusBar(statusBar);

        retranslateUi(statitcs_assignmentClass);

        QMetaObject::connectSlotsByName(statitcs_assignmentClass);
    } // setupUi

    void retranslateUi(QMainWindow *statitcs_assignmentClass)
    {
        statitcs_assignmentClass->setWindowTitle(QApplication::translate("statitcs_assignmentClass", "statitcs_assignment", nullptr));
        calculate_btn->setText(QApplication::translate("statitcs_assignmentClass", "Calculate", nullptr));
        length_header->setText(QApplication::translate("statitcs_assignmentClass", "Length", nullptr));
        angle_header->setText(QApplication::translate("statitcs_assignmentClass", "Angle", nullptr));
        x_coordinate_header->setText(QApplication::translate("statitcs_assignmentClass", "X Peg", nullptr));
        y_peg_header->setText(QApplication::translate("statitcs_assignmentClass", "Y Peg", nullptr));
        spring1_length_ptext->setPlainText(QApplication::translate("statitcs_assignmentClass", "0.0", nullptr));
        spring1_angle_ptext->setPlainText(QApplication::translate("statitcs_assignmentClass", "0.0", nullptr));
#ifndef QT_NO_TOOLTIP
        spring1_xpin_etxt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        spring1_xpin_etxt->setPlaceholderText(QApplication::translate("statitcs_assignmentClass", "0", nullptr));
        spring1_ypin_etxt->setPlaceholderText(QApplication::translate("statitcs_assignmentClass", "0", nullptr));
        spring2_length_ptext->setPlainText(QApplication::translate("statitcs_assignmentClass", "0.0", nullptr));
        spring2_angle_ptext_2->setPlainText(QApplication::translate("statitcs_assignmentClass", "0.0", nullptr));
        spring2_xpin_etxt->setPlaceholderText(QApplication::translate("statitcs_assignmentClass", "0", nullptr));
        spring2_ypin_etxt->setPlaceholderText(QApplication::translate("statitcs_assignmentClass", "0", nullptr));
        spring3_length_ptext_3->setPlainText(QApplication::translate("statitcs_assignmentClass", "0.0", nullptr));
        spring3_angle_ptext_3->setPlainText(QApplication::translate("statitcs_assignmentClass", "0.0", nullptr));
        spring3_xpin_etxt->setPlaceholderText(QApplication::translate("statitcs_assignmentClass", "0", nullptr));
        spring3_ypin_etxt->setPlaceholderText(QApplication::translate("statitcs_assignmentClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statitcs_assignmentClass: public Ui_statitcs_assignmentClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATITCS_ASSIGNMENT_H
