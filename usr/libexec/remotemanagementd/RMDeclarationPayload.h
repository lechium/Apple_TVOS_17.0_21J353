//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, RMManagementSource;

@interface RMDeclarationPayload : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingManagementSourceIdentifier;	// IMP=0x002000000002ee87
- (id)reportDetails;	// IMP=0x002000000002faf1
- (void)_validateLoadStateWithErrors:(id)arg1;	// IMP=0x001000000002f9a1
- (short)_currentLoadState;	// IMP=0x001000000002f85f
- (void)_validateSetOncePropertiesWithErrors:(id)arg1;	// IMP=0x001000000002f3e6
- (void)_validateManagementSourceWithErrors:(id)arg1;	// IMP=0x001000000002f349
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x001000000002f120
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x001000000002eef7
@property(readonly, copy, nonatomic) NSString *managementSourceIdentifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *declarationType; // @dynamic declarationType;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) short loadState; // @dynamic loadState;
@property(retain, nonatomic) RMManagementSource *managementSource; // @dynamic managementSource;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(copy, nonatomic) NSString *serverToken; // @dynamic serverToken;
@property(retain, nonatomic) id state; // @dynamic state;
@property(readonly) Class superclass;

@end

