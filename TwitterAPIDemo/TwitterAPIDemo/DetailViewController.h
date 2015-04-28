//
//  DetailViewController.h
//  TwitterAPIDemo
//
//  Created by Admin on 4/28/15.
//  Copyright (c) 2015 techgrains. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

