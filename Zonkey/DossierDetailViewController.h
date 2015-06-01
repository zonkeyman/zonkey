//
//  DossierDetailViewController.h
//  Zonkey
//
//  Created by Andrew Aird
//

#import <UIKit/UIKit.h>
#import "werkDossier.h"

@interface DossierDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet PFImageView *recipePhoto;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UITextView *ingredientTextView;
@property (weak, nonatomic) IBOutlet UILabel *postcodeLabel;

@property (nonatomic, strong) werkDossier *dossier;

@end
