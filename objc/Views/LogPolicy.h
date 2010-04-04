#import <Cocoa/Cocoa.h>


@interface LogPolicy : NSObject
{
	id owner;
	NSMenu* menu;
	NSMenu* urlMenu;
	NSMenu* addrMenu;
	NSMenu* memberMenu;
	NSMenu* chanMenu;
	NSString* url;
	NSString* addr;
	NSString* nick;
	NSString* chan;
}

@property (nonatomic, assign) id owner;
@property (nonatomic, retain) NSMenu* menu;
@property (nonatomic, retain) NSMenu* urlMenu;
@property (nonatomic, retain) NSMenu* addrMenu;
@property (nonatomic, retain) NSMenu* memberMenu;
@property (nonatomic, retain) NSMenu* chanMenu;
@property (nonatomic, retain) NSString* url;
@property (nonatomic, retain) NSString* addr;
@property (nonatomic, retain) NSString* nick;
@property (nonatomic, retain) NSString* chan;

@end
