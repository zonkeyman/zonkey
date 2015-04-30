//
//  werkDossier.h
//  Zonkey
//
//  Created by Andrew Aird
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface werkDossier : NSObject

@property (nonatomic, strong) NSString *naam; // name of dossier
@property (nonatomic, strong) NSString *stad; // city of dossier
@property (nonatomic, strong) NSString *postcode; // postcode of dossier
@property (nonatomic, strong) NSString *adres; // address of dossier

@end
