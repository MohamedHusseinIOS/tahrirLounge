//
//  FirstViewController.m
//  session 7 task
//
//  Created by MOMO on 5/2/17.
//  Copyright © 2017 GreenRoot. All rights reserved.
//

#import "FirstViewController.h"
#import "SWRevealViewController.h"
#import "navigationBarViewController.h"

@interface FirstViewController ()

@end

@implementation FirstViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
	_apiUrl = @"http://tahrirlounge.net/event/api/";

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)viewDidAppear:(BOOL)animated{
    
    navigationBarViewController *navigationBar = [navigationBarViewController new];
    
    UIColor *navigationBarColorBlue = [UIColor colorWithRed:1.0/255 green:125.0/255 blue:214.0/255 alpha:1.0];
    
    [navigationBar customSetup:_sidebarButton :self];
    [navigationBar customizeNavigation:_sidebarButton :self :navigationBarColorBlue : @"Home"];
}



/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
