//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCKRecordID;
@protocol IDSCKRecordKeyValueSetting;

@interface IDSCKRecord : NSObject
{
    IDSCKRecordID *_recordID;	// 8 = 0x8
    id <IDSCKRecordKeyValueSetting> _encryptedValuesByKey;	// 16 = 0x10
}

+ (id)alloc;	// IMP=0x00600000000c1ccd
+ (Class)__class;	// IMP=0x00600000000c1c7d
- (void).cxx_destruct;	// IMP=0x00000000000c1cfb
@property(readonly, nonatomic) id <IDSCKRecordKeyValueSetting> encryptedValuesByKey; // @synthesize encryptedValuesByKey=_encryptedValuesByKey;
@property(readonly, copy, nonatomic) IDSCKRecordID *recordID; // @synthesize recordID=_recordID;

@end

