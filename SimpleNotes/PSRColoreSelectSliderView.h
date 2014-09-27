//
//  PSRColoreSelectSliderView.h
//  SimpleNotes
//
//  Created by dimaBii on 9/27/14.
//  Copyright (c) 2014 Daniil Korotin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PSRColoreSelectSliderView : UIView

@property (nonatomic, strong) UIColor *color;

@property (nonatomic, weak) IBOutlet UISlider *redSlider;
@property (nonatomic, weak) IBOutlet UISlider *greenSlider;
@property (nonatomic, weak) IBOutlet UISlider *blueSlider;
@end
