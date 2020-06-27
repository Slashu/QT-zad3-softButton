#include "softbutton.h"
#include "QDebug"

SoftButton::SoftButton():
    buttonImageId("qrc:/Facebook.png"),
    buttonText("FACEBOOK")
{
    buttonImageId2 = "qrc:/GPlus.png";
    buttonText2= "GOOGLE";
}

void SoftButton::handleClicked(){
    if(buttonImageId == "qrc:/Facebook.png"){
        setButtonImageId(buttonImageId2);
        setButtonText(buttonText2);
    }
    else{
        setButtonImageId("qrc:/Facebook.png");
        setButtonText("FACEBOOK");
    }

}

void SoftButton::setButtonImageId(QString newButtonImageId){
    buttonImageId = newButtonImageId;
    emit buttonImageChanged();
}

void SoftButton::setButtonText(QString newButtonText){
    buttonText = newButtonText;
    emit buttonTextChanged();
}

QString SoftButton::getButtonImageId() const{
    return buttonImageId;
}

QString SoftButton::getButtonText() const{
    return buttonText;
}
