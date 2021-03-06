//
//  NSRelationshipDescription+NSPDynamoStore.h
//  NSPDynamoStore
//
//  Created by Janos Tolgyesi on 15/04/15.
//  Copyright (c) 2015 Neosperience SpA. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSRelationshipDescription (NSPDynamoStore)

-(NSString*)nsp_fetchRequestTemplateName;
-(NSDictionary*)nsp_fetchRequestVariableKeyPathMap;
-(BOOL)nsp_isUnmodeledInverseRelationship;

-(NSFetchRequest*)nsp_destinationFetchRequestForSourceObject:(id)sourceObject;

@end
