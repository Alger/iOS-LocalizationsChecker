//
//  LocalizationChecker.h
//  test
//
//  Created by Hector Zarate / Tomasz Wyszomirski on 2/22/13.
//

#import <Foundation/Foundation.h>

@interface LocalizationChecker : NSObject


// This is the singleton that will handle the data structure.

+(LocalizationChecker *)sharedLocalizationChecker;

-(BOOL)isStringLocalized:(NSString *)theString;
-(void)addLocalizedWord:(NSString *)theString;


//This is a configuration value, to check if the view should be shown highlighted when a string is not localized
//Default is NO
@property (nonatomic, assign) BOOL showsFaultyWhenViewHidden;

@end
