//
//  ZonkeyChatViewController.h
//  Zonkey
//
//  Created by user on 02/06/15.
//
//

#import <UIKit/UIKit.h>

@interface ZonkeyChatViewController : UIViewController <UITextFieldDelegate>
{
    UITextField             *tfEntry;
}

@property(nonatomic, strong) IBOutlet UITextField *tfEntry;

-(void) registerForKeyboardNotifications;
-(void) freeKeyboardNotifications;
-(void) keyboardWasShown:(NSNotification*)aNotification;
-(void) keyboardWillHide:(NSNotification*)aNotification;

@end