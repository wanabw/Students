//
//  StudentsTableViewController.h
//  Students
//
//  Created by Fahmy on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StudentsTableViewController : UITableViewController {

    NSMutableArray *cellData;
}

-(void)addStudent:(UIBarButtonItem *)button ;

@end
