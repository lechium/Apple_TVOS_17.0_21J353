//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@interface GKScoreChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x004000000013ee23
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x002000000013f2eb
- (id)internalRepresentation;	// IMP=0x001000000013eea3
- (Class)classForInternalRepresentation;	// IMP=0x001000000013ee92
- (_Bool)hasDetails;	// IMP=0x001000000013ee30

// Remaining properties
@property(retain, nonatomic) NSNumber *context; // @dynamic context;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) NSNumber *value; // @dynamic value;

@end

