//
//  DetailViewController.h
//  sublios
//
//  Created by Jin Hyuk Cho on 1/23/16.
//  Copyright © 2016 Jin Hyuk Cho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

