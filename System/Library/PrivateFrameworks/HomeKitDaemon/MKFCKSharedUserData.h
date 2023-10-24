//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID, _MKFUser;

__attribute__((visibility("hidden")))
@interface MKFCKSharedUserData
{
    _MKFUser *_workingStoreUser;	// 8 = 0x8
}

+ (id)rootKeyPath;	// IMP=0x00600000003f8be1
+ (id)fetchRequest;	// IMP=0x0060000000cf6b7e
- (void).cxx_destruct;	// IMP=0x00000000003f9302
- (id)workingStoreUser;	// IMP=0x00000000003f8bee

// Remaining properties
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end
