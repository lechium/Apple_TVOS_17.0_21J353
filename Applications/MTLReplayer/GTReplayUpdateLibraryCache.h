//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface GTReplayUpdateLibraryCache
{
    NSString *_uuid;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000477a
- (void).cxx_destruct;	// IMP=0x002000000000496d
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004884
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004782

@end

