#include <stdio.h>
#include <stdint.h>

int main()
{
    int packet_id, status_code;
    float voltage;

    scanf("%x %o %f", &packet_id, &status_code, &voltage);

    uint8_t ustatus_code = status_code;

    uint16_t checksum = packet_id + status_code;

    char ch = status_code;

    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %u\n", packet_id, ustatus_code, ch, voltage, checksum);

    return 0;
}