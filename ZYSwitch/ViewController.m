//
//  ViewController.m
//  ZYSwitch
//
//  Created by zy on 2022/1/12.
//

#import "ViewController.h"
#import "ZYSwitch.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    ZYSwitch * sw = [[ZYSwitch alloc] initWithFrame:CGRectMake(100, 100, 100, 50)];
    [self.view addSubview:sw];
    sw.shapeType = ZYSwitchShapeTypeOval;
    sw.onTintColor = UIColor.yellowColor;
    sw.tintColor = UIColor.redColor;
    sw.thumbTintColor = UIColor.greenColor;
    sw.on = true;

    // Do any additional setup after loading the view.
}


@end
