//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKAppleMediaAccessory, MKFCKHome, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKResident
{
}

+ (id)fetchRequest;	// IMP=0x0080000000cf6abe
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x000000000089f261
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x000000000089f24c

// Remaining properties
@property(retain, nonatomic) MKFCKAppleMediaAccessory *appleMediaAccessory; // @dynamic appleMediaAccessory;
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(retain, nonatomic) MKFCKHome *home; // @dynamic home;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *idsIdentifier; // @dynamic idsIdentifier;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

