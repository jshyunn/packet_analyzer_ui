
#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>


class MainWindow : public QWidget {

  public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent) {

  auto *grid = new QGridLayout(this);
  grid->setVerticalSpacing(15);
  grid->setHorizontalSpacing(10);

  auto *title = new QLabel("Title:", this);
  grid->addWidget(title, 0, 0, 1, 1);
  title->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *edt1 = new QLineEdit(this);
  grid->addWidget(edt1, 0, 1, 1, 1);

  auto *author = new QLabel("Author:", this);
  grid->addWidget(author, 1, 0, 1, 1);
  author->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *edt2 = new QLineEdit(this);
  grid->addWidget(edt2, 1, 1, 1, 1);

  auto *review = new QLabel("Review:", this);
  grid->addWidget(review, 2, 0, 1, 1);
  review->setAlignment(Qt::AlignRight | Qt::AlignTop);

  auto *te = new QTextEdit(this);
  grid->addWidget(te, 2, 1, 3, 1);

  setLayout(grid);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  MainWindow window;

  window.setWindowTitle("Review");
  window.show();

  return app.exec();
}