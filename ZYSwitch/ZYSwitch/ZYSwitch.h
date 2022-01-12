//
//  ZYSwitch.h
//  zy
//
//  Created by zy on 24/09/2021.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ZYSwitchShapeType) {
    ZYSwitchShapeTypeOval,              /// 圆形
    ZYSwitchShapeTypeRectangle,         /// 方形 带圆角
    ZYSwitchShapeTypeRectangleNoCorner, /// 方形 无圆角
};

@interface ZYSwitch : UIControl <UIGestureRecognizerDelegate>

/** 开关状态读取与设置 */
@property (nonatomic, getter = isOn) BOOL on;
/** 开关形状枚举值：默认ZYSwitchShapeTypeOval */
@property (nonatomic, assign) ZYSwitchShapeType shapeType;
/** 打开时的颜色 */
@property (nonatomic, strong) UIColor *onTintColor;
/** 关闭时的颜色 */
@property (nonatomic, strong) UIColor *tintColor;
/** 圆点颜色 */
@property (nonatomic, strong) UIColor *thumbTintColor;
/** 是否需要阴影效果 */
@property (nonatomic, assign) BOOL shadow;
/** 关闭时的阴影颜色 */
@property (nonatomic, strong) UIColor *tintBorderColor;
/** 打开时的阴影颜色 */
@property (nonatomic, strong) UIColor *onTintBorderColor;

@end

NS_ASSUME_NONNULL_END






