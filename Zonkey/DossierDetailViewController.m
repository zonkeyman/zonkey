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

@synthesize recipePhoto;
@synthesize prepTimeLabel;
@synthesize ingredientTextView;
@synthesize recipe;
@synthesize postcodeLabel;


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

    self.title = recipe.name;
    self.prepTimeLabel.text = recipe.prepTime;
    self.recipePhoto.file = recipe.imageFile;
    
    NSMutableString *ingredientText = [NSMutableString string];
    for (NSString* ingredient in recipe.ingredients) {
        [ingredientText appendFormat:@"%@\n", ingredient];
    }
    self.ingredientTextView.text = ingredientText;
    
}

- (void)viewDidUnload
{
    [self setRecipePhoto:nil];
    [self setPrepTimeLabel:nil];
    [self setIngredientTextView:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
