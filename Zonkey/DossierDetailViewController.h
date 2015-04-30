//
//  DossierDetailViewController.h
//  Zonkey
//
//  Created by Andrew Aird
//

#import <UIKit/UIKit.h>
#import "Dossier.h"

@interface DossierDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet PFImageView *recipePhoto;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UITextView *ingredientTextView;

@property (nonatomic, strong) Dossier *recipe;

@end
