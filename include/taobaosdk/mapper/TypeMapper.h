#ifndef TYPEMAPPER_H
#define TYPEMAPPER_H

#include <QString>

// 类型映射器
class TypeMapper
{
public:
  //必须实现以下三个映射函数
  virtual const QString getDomainLangType(const QString &apiType) const = 0;
  virtual const QString getRequestLangType(const QString &apiType) const = 0;
  virtual const QString getResponseLangType(const QString &apiType) const = 0;
};

#endif // TYPEMAPPER_H
