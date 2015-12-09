//
//  DetailViewController.h
//  TestRetainCount
//
//  Created by wzr on 2015/12/09.
//  Copyright © 2015年 wzr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

