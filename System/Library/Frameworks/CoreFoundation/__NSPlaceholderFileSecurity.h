//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileSecurity.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity : NSFileSecurity
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000172f0f
+ (id)immutablePlaceholder;	// IMP=0x00100000001729f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000172f12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000172e8f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000172a63
- (void)dealloc;	// IMP=0x0000000000172a62
- (unsigned long long)retainCount;	// IMP=0x0000000000172a5a
- (oneway void)release;	// IMP=0x0000000000172a59
- (id)retain;	// IMP=0x0000000000172a55
- (id)init;	// IMP=0x0000000000172a20
- (id)initWithFileSec:(struct _filesec *)arg1;	// IMP=0x00000000001729fd

@end
