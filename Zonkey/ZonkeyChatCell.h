//
//  ZonkeyChatCell.h
//  Zonkey
//
//  Created by user on 02/06/15.
//
//

#import <UIKit/UIKit.h>

@interface ZonkeyChatCell : UITableViewCell

{
    IBOutlet UILabel *userLabel;
    IBOutlet UITextView *textString;
    IBOutlet UILabel *timeLabel;
}
@property (nonatomic,retain) IBOutlet UILabel *userLabel;
@property (nonatomic,retain) IBOutlet UITextView *textString;
@property (nonatomic,retain) IBOutlet UILabel *timeLabel;

@end
