#ifndef SOFTBUTTON_H
#define SOFTBUTTON_H

#include <QObject>
#include <QQuickItem>

class SoftButton : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString buttonImageId READ getButtonImageId
               WRITE setButtonImageId NOTIFY buttonImageChanged)
    Q_PROPERTY(QString buttonText READ getButtonText
               WRITE setButtonText NOTIFY buttonTextChanged)
public:
    SoftButton();

    void setButtonImageId(QString newButtonImageId);
    void setButtonText(QString newButtonText);
    QString getButtonImageId() const;
    QString getButtonText() const;

signals:
    void clicked();
    void buttonImageChanged();
    void buttonTextChanged();

public slots:
    void handleClicked();

private:
    QString buttonImageId;
    QString buttonImageId2;
    QString buttonText;
    QString buttonText2;

};

#endif // SOFTBUTTON_H
