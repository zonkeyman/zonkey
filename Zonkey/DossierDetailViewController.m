//
//  DossierDetailViewController.m
//  Zonkey
//
//  Created by Andrew Aird
//

#import "DossierDetailViewController.h"

@interface DossierDetailViewController ()

@end

@implementation DossierDetailViewController

@synthesize dossier;
@synthesize postcodeLabel;
@synthesize titelLabel;
@synthesize huisnummerLabel;
@synthesize straatLabel;
@synthesize stadLabel;
@synthesize omschrijvingLabel;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.titelLabel.text = dossier.naam;
    self.straatLabel.text = dossier.adres;
    self.huisnummerLabel.text = dossier.huisnummer;
    self.stadLabel.text = dossier.stad;
    self.postcodeLabel.text = dossier.postcode;
    self.omschrijvingLabel.text = dossier.omschrijving;
    
    //self.recipePhoto.file = recipe.imageFile;
    /*
    NSMutableString *ingredientText = [NSMutableString string];
    for (NSString* ingredient in recipe.ingredients) {
        [ingredientText appendFormat:@"%@\n", ingredient];
    }
    self.ingredientTextView.text = ingredientText;
    */
}

- (void)viewDidUnload
{
    [self setStadLabel:nil];
    [self setHuisnummerLabel:nil];
    [self setStraatLabel:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
