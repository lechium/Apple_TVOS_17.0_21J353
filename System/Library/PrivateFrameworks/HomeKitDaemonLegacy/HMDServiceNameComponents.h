//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDServiceNameComponents : HMFObject
{
    NSString *_rawServiceName;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSString *_roomName;	// 24 = 0x18
    NSString *_format;	// 32 = 0x20
}

+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;	// IMP=0x006000000002dcea
+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;	// IMP=0x006000000002dcce
- (void).cxx_destruct;	// IMP=0x000000000002dc7b
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *rawServiceName; // @synthesize rawServiceName=_rawServiceName;
- (id)composedName;	// IMP=0x000000000002da1a
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;	// IMP=0x000000000002d5ab

@end

