//
//  PSRColoreSelectSliderViewController.h
//  SimpleNotes
//
//  Created by dimaBii on 9/27/14.
//  Copyright (c) 2014 Daniil Korotin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PSRColoreSelectSliderViewController;
@protocol PSRColoreSelectSliderViewControllerDelegate <NSObject>

-(void)psr_colorSelectViewControler:(PSRColoreSelectSliderViewController *) controller didFinishWithColor:(UIColor *)color;

@end

@interface PSRColoreSelectSliderViewController: UIViewController
@property (nonatomic, strong) UIColor *SelectedColor;
@property (nonatomic, weak) id <PSRColoreSelectSliderViewControllerDelegate> delegate;

@end