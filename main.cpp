#include <QtCore/QSettings>
#include <QDebug>
#include <QStringList>

int main(void) {
    QSettings settings("quasselcore.conf", QSettings::IniFormat);
    QStringList keys = settings.allKeys();
    Q_FOREACH(QString key, keys) {
        qWarning() << key << settings.value(key);
    }

    return 0;
}

