#include<QApplication>
#include<QLabel>

int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    QLabel label("Hello World");
    label.show();
    label.setWindowTitle("My application");
    label.resize(500,100);
    return app.exec();
}
