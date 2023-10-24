//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BoardServices/NSObject-Protocol.h>

@protocol BSXPCDecoding, BSXPCEncoding;

@protocol BSXPCSecureCoding <NSObject>
+ (_Bool)supportsBSXPCSecureCoding;
- (id)initWithBSXPCCoder:(id <BSXPCDecoding>)arg1;
- (void)encodeWithBSXPCCoder:(id <BSXPCEncoding>)arg1;
@end

