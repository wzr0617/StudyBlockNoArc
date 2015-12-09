//
//  MasterViewController.h
//  TestRetainCount
//
//  Created by wzr on 2015/12/09.
//  Copyright © 2015年 wzr. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

