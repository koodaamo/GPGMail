/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MFMessageAddressee : NSObject
{
    NSString *_displayName;
    NSString *_address;
    id _message;
    NSString *_type;
}

@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) id message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)formattedAddress;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 type:(id)arg3 message:(id)arg4;

@end
