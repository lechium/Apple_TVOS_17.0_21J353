//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol GTXPCConnection, OS_xpc_object;

@interface GTReplayUpdateTermination
{
    NSObject<OS_xpc_object> *_path;	// 8 = 0x8
    id <GTXPCConnection> _connection;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000004afe
- (void).cxx_destruct;	// IMP=0x0020000000004bcd
@property(retain, nonatomic) id <GTXPCConnection> connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *path; // @synthesize path=_path;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004b54
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004b06

@end
