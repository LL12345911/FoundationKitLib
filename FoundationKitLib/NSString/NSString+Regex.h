//
//  NSString+Regex.h
//  EngineeringCool
//
//  Created by Mars on 2020/3/11.
//  Copyright © 2020 Mars. All rights reserved.
//

//#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 一些正则校验，判断邮箱，手机号码，车牌号，身份证号，网址，账号，密码，ip，去掉html格式，工商税号等。

@interface NSString (Regex)

///////////////////////////// 正则表达式相关  ///////////////////////////////

/** 邮箱验证 */
- (BOOL)isValidEmail;

/** 手机号码验证 */
- (BOOL)isValidPhoneNum;

/** 车牌号验证 */
- (BOOL)isValidCarNo;

/** 网址验证 */
- (BOOL)isValidUrl;

/** 邮政编码 */
- (BOOL)isValidPostalcode;

/** 纯汉字 */
- (BOOL)isValidChinese;



/**
 @brief     是否符合IP格式，xxx.xxx.xxx.xxx
 */
- (BOOL)isValidIP;

/** 身份证验证 refer to http://blog.csdn.net/afyzgh/article/details/16965107*/
 - (BOOL)isValidIdCardNum;
 
 /**
 @brief     是否符合最小长度、最长长度，是否包含中文,数字，字母，其他字符，首字母是否可以为数字
 @param     minLenth 账号最小长度
 @param     maxLenth 账号最长长度
 @param     containChinese 是否包含中文
 @param     containDigtal   包含数字
 @param     containLetter   包含字母
 @param     containOtherCharacter   其他字符
 @param     firstCannotBeDigtal 首字母不能为数字
 @return    正则验证成功返回YES, 否则返回NO
 */
- (BOOL)isValidWithMinLenth:(NSInteger)minLenth
                   maxLenth:(NSInteger)maxLenth
             containChinese:(BOOL)containChinese
              containDigtal:(BOOL)containDigtal
              containLetter:(BOOL)containLetter
      containOtherCharacter:(NSString *)containOtherCharacter
        firstCannotBeDigtal:(BOOL)firstCannotBeDigtal;

/** 去掉两端空格和换行符 */
- (NSString *)stringByTrimmingBlank;

/** 去掉html格式 */
- (NSString *)removeHtmlFormat;

/** 工商税号 */
- (BOOL)isValidTaxNo;


@end

NS_ASSUME_NONNULL_END
