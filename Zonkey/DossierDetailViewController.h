//
//  DossierDetailViewController.h
//  Zonkey
//
//  Created by Andrew Aird
//

#import <UIKit/UIKit.h>
#import "werkDossier.h"

@interface DossierDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *postcodeLabel;
@property (weak, nonatomic) IBOutlet UILabel *titelLabel;
@property (weak, nonatomic) IBOutlet UILabel *huisnummerLabel;
@property (weak, nonatomic) IBOutlet UILabel *straatLabel;
@property (weak, nonatomic) IBOutlet UILabel *stadLabel;
@property (weak, nonatomic) IBOutlet UITextView *omschrijvingLabel;


@property (nonatomic, strong) werkDossier *dossier;

@end
