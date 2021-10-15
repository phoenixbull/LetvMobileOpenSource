//
//  ViewController.m
//  LetvMobileOpenSourceDemo
//
//  Created by letv_lzb on 2021/10/12.
//

#import "ViewController.h"
#import <LetvMobileOpenSource/LetvMobileOpenSource.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    HZActivityIndicatorView *view = [[HZActivityIndicatorView alloc] initWithFrame:CGRectMake(100, 100, 200, 200)];

    [view setBackgroundColor:[UIColor redColor]];
//    [view add];
    [self.view addSubview:view];
    [view startAnimating];
    // Do any additional setup after loading the view.
}


@end
