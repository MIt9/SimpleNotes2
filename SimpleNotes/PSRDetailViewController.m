//
//  PSRDetailViewController.m
//  SimpleNotes
//
//  Created by Daniil Korotin on 24.04.14.
//  Copyright (c) 2014 Daniil Korotin. All rights reserved.
//

#import "PSRDetailViewController.h"

@interface PSRDetailViewController ()

@end

@implementation PSRDetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];


    self.view.backgroundColor = [UIColor whiteColor];
    self.textView = [[UITextView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:self.textView];
    
    if (self.note) {
        self.textView.text = self.note.text;
    }
    
    self.navigationItem.title = self.note.text;
    
    UIBarButtonItem *cancelButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(cancel)];
        
    UIBarButtonItem *colorChangeButton = [[UIBarButtonItem alloc]init];
    colorChangeButton.action = @selector(doTheThing);
    colorChangeButton.title = @"Color";
    colorChangeButton.target = self;
    
    UIBarButtonItem *fontChangeButton = [[UIBarButtonItem alloc]init];
    fontChangeButton.action = @selector(doTheThing);
    fontChangeButton.title = @"Font";
    fontChangeButton.target = self;

//    self.navigationItem.rightBarButtonItem = buttons;
    self.navigationItem.rightBarButtonItems = [[NSArray alloc] initWithObjects:cancelButton, colorChangeButton, fontChangeButton, nil];
}

- (void)cancel {
    
}
- (void) doTheThing {
    
    NSLog(@"Doing the thing");
    
}
- (void)viewWillDisappear:(BOOL)animated {
    self.note.text = self.textView.text;
}

@end
