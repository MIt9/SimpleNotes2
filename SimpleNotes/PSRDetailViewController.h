//
//  PSRDetailViewController.h
//  SimpleNotes
//
//  Created by Daniil Korotin on 24.04.14.
//  Copyright (c) 2014 Daniil Korotin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSRNote.h"
#import "PSRColoreSelectSliderViewController.h"

@interface PSRDetailViewController : UIViewController<PSRColoreSelectSliderViewControllerDelegate>


@property (nonatomic, strong) UITextView *textView;
@property (nonatomic, strong) PSRNote *note;

@end
