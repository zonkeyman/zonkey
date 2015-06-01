//
//  werkDossier.h
//  Zonkey
//
//  Created by Andrew Aird
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface werkDossier : NSObject

@property (nonatomic, strong) NSString *naam; // naam van dossier
@property (nonatomic, strong) NSString *stad; // stad van dossier
@property (nonatomic, strong) NSString *postcode; // postcode van dossier
@property (nonatomic, strong) NSString *adres; // adres van dossier
@property (nonatomic, strong) NSString *huisnummer; // huisnummer van dossier
@property (nonatomic, strong) NSString *omschrijving; // omschrijving werkzaamheden

@end
