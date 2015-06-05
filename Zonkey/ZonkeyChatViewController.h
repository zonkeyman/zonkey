//
//  ZonkeyChatViewController.h
//  Zonkey
//
//  Created by user on 02/06/15.
//
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ZonkeyChatViewController : UIViewController <UITextFieldDelegate>
{
    UITextField             *tfEntry;
    IBOutlet UITableView    *chatTable;
    NSMutableArray          *chatData;
    PF_EGORefreshTableHeaderView *_refreshHeaderView;
    
    NSString                *className;
    NSString                *userName;
    
    BOOL _reloading;
}

@property(nonatomic, strong) IBOutlet UITextField *tfEntry;
@property (nonatomic, retain) UITableView *chatTable;
@property (nonatomic, retain) NSArray *chatData;

-(void) registerForKeyboardNotifications;
-(void) freeKeyboardNotifications;
-(void) keyboardWasShown:(NSNotification*)aNotification;
-(void) keyboardWillHide:(NSNotification*)aNotification;
-(void)loadLocalChat;

@end